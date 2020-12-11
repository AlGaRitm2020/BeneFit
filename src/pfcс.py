import sys
import csv
with open('pfcc_en.csv', "r", encoding="utf8") as csvfile:
    reader = csv.reader(csvfile, delimiter=';', quotechar='"')
    new = sorted(reader)

with open('pfcc_en1.csv', "w", encoding="utf8") as csvfile:
	writer = csv.writer(
	csvfile, delimiter=';', quotechar='"', quoting=csv.QUOTE_MINIMAL)
	for row in new:
		writer.writerow(row)
