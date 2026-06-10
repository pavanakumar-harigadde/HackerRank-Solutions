#Python program to find Runner Up Score

if __name__ == '__main__':
    n = int(input())
    arr = map(int, input().split())
    #Set contains unique elements
    unique=sorted(set(arr))
    print(unique[-2])
