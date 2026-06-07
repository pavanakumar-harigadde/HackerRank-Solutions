'''Given a year, determine whether it is a leap year. 
If it is a leap year, return the Boolean True, otherwise return False.
'''

def is_leap(year):
    leap = False
    #condition to check leap year
    if(year%4==0):
        if(year%400==0):
            leap=True
        
        elif(year%100==0):
            leap==False
        
        else:
            leap=True

    return leap

#input
year = int(input())
print(is_leap(year))
