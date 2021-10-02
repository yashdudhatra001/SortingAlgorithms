# Insertion Sort in Python

def InsertionSort(Array):

	# Traversing the Array
	for i in range(1, len(Array)):

		Key = Array[i]

		j = i - 1
		while j >= 0 and Key < Array[j] :
				Array[j + 1] = Array[j]
				j -= 1
		Array[j + 1] = Key

# Main code, where function will be called :
A = [74, 3, 34, 57, 82, 1, 10, 22]

InsertionSort(A)

print ("SORTED ARRAY : ")
for i in range(len(A)):
	print (A[i], end = " ")
