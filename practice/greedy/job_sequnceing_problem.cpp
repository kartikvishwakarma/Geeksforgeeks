/*
1) Sort all jobs in decreasing order of profit.
2) Initialize the result sequence as first job in sorted jobs.
3) Do following for remaining n-1 jobs
.......a) If the current job can fit in the current result sequence 
          without missing the deadline, add current job to the result.
          Else ignore the current job.
*/

#include <iostream>
#include <algorithm>
using namespace std;

typedef struct Job{
	char job_id;
	int deadline;
	int profit;
}job;

bool comp(job a, job b){
	return (a.profit > b.profit);
}

void job_scheduling(job arr[], int n){
	sort(arr,arr+n, comp);

	int res[n];  // store result
	bool slot[n]; // keep trace of free slot

	for(int i=0;i<n;i++)
		slot[i]=false;

	for(int i=0;i<n;i++){
		for(int j=min(n,arr[i].deadline)-1; j>=0; j--){
			if(slot[j]==false){
				res[j]=i;
				slot[j]=true;
				break;
			}
		}
	}
	for(int i=0;i<n;i++){
		if(slot[i])
			cout<<arr[res[i]].job_id;
	}
	cout<<"\n";

}

int main(){
	job arr[]= { {'A',2,100}, {'B',1,19}, {'C',2,27},
				 {'D',1,25},  {'E',3,15} };
	int n = sizeof(arr)/sizeof(arr[0]);

	job_scheduling(arr,n);
}