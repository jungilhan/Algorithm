def search(array, value):
        return binarysearch(array, 0, len(array) - 1, value)

def binarysearch(array, low, high, value):
        if low > high:
                return -1

        mid = (low + high) / 2
        if array[mid] == value:
                return mid
        elif array[mid] < value:
                return binarysearch(array, mid + 1, high, value) 
        elif array[mid] > value:
                return binarysearch(array, low, mid - 1, value)
 
if __name__ == '__main__':
        array = [0, 10, 20, 30, 40, 50, 60, 70, 80, 90]
        print search(array, 90)