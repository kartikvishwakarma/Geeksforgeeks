import csv
from time import sleep

path = '/home/kartik/workspace/spatial_temporal/datasets/tdEdgeId.src.sink.time.csv'


file = csv.reader(path)

for row in file:
	print(row)
	sleep(1)