'''
    리스트가 가진 다양한 기능
'''
# list.index(value) : 값을 이용하여 위치를 찾는게 가능
list1 = ['a', 'b', 'q', 'f']
print(list1.index('b'))  # 1

# list.extend( [value1, value2] ) : 리스트 뒤에 값을 추가 (‘+’연산자 보다 성능이 좋음)
list2 = [1, 2, 3]
list1.extend(list2)
print(list1)

# list.insert( index, value ) : 원하는 위치에 값을 추가
list1.insert(1, 'h')
print(list1)

'''
    list.sort( ) : 값을 순서대로 정렬
    문자열과 숫자가 섞여 있는 경우 작동 안됨 key값이 없으면 작동이 안됨
    정렬 기준은 int임
    list3.sort()
'''

list1.sort(key=str)  # key값에 따라 정렬
print(list1)

# list.reverse( ) : 값을 역순으로 정렬
list1.reverse()    # 문자열과 숫자가 섞여 있는 경우 작동 안됨
print(list1)

# list.sort(reverse=True) : 내림 차순 정렬
list1.sort(key=str)
print(list1)
list1.sort(reverse=True, key=str)
print(list1)

'''
    list와 string : split(), .join()
'''
# 1. split()
# 문자열과 리스트는 유사하다
myList = [1, 9, 8, 5, 0, 6]
print(5 in myList)
mystr = 'hello world'
print('e' in mystr)

# 서로 변환 가능하다
ch = list('hello')
print(ch)

# string => list
words = "python은 프로그래밍을 배우기에 아주 좋은 언어입니다."
wordsList = words.split()
print(wordsList)

# list => string
timeStr = "10:34:17"
timeList = timeStr.split(':')  # 기준에 따라 쪼갬
print(timeList)

newTimeStr = ':'.join(timeList)  # 리스트에 저장된 이전 값과 이후 값 연결시 ':'추가
print(newTimeStr)

# 2. slice
# slicing : 리스트나 문자열에서 값을 여러개 가져오는 기능
# list[시작:끝] 시작은 포함 되지만 끝 값은 포함되지 않는다.
text = "hello world"
text = text[1:5]  # index 1부터 ~ index 5 전(4)까지 => ello
print(text)

'''
    slice를 하면 해당하는 부분의 리스트나 문자열을 새로 만들어 준다.

    시작과 끝부분을 얻어 오는 방법
    list[2:] : 2번째부터 끝까지 반환
    list[:2] : 처음부터 2번째 까지 반환
    list[:] : 처음부터 끝까지 전부 반환 (리스트를 복사해 둘 때 유용하게 사용됨)
'''

# 3. step
# slice한 값의 범위에서 step 값을 주어 그 값만큼 건너뛰어 가져오는 기능
# list[시작값:끝값:step]

list1 = list(range(20))  # 0 ~ 19
print(list1)

print(list1[5:15:3])

print(list1[15:5:-1])

print(list1[::3])

print(list1[::-3])

# slice로 리스트 수정하기
'''
    del list[ :5 ] : 처음부터 5번째 전까지 삭제
    참고 : del 함수는 파이썬이 자체적으로 가지고 있는 삭제 함수이며 다음과 같이 사용한다.

    del 객체
    # 객체란 파이썬에서 사용되는 모든 자료형을 말한다.

    수정
    list[ 1:3 ] = [ 77, 88 ]
    list[ 1:3 ] = [ 77, 88 ,99 ] : 더 많은 개수로 변환
    list[ 1:4 ] = [ 8 ] : 더 적은 개수로 변환
'''

numbers = list(range(10))
print(numbers)

# 삭제
del numbers[:5]  # 처음부터 5번째 전까지 삭제 0 ~ 4
print(numbers)

# 수정
numbers[1:3] = [66, 77]  # index 1,2 교체
print(numbers)

'''
    참고
    https://wayhome25.github.io/python/2017/02/26/py-14-list/
    https://suwoni-codelab.com/python%20%EA%B8%B0%EB%B3%B8/2018/03/02/Python-Basic-List5/
'''
