# Exercise 23
# Strings, Bytes, and Character Encodings

# 1. How modern computers store human languages for display and processing and how Python 3 calls the strings
# 2. How you must "encode" and "decode" Python's strings into a type called bytes.
# 3. How to handle errors in your string and byte handling.
# 4. How to read code and find out what it means even if you've never seen it before.

import sys
script, input_encoding, error = sys.argv

def main(language_file, encoding, errors):
    # 텍스트 파일에서 한 줄을 읽어온다
    # 텍스트 파일 포인터가 한 줄 내려간다
    line = language_file.readline()

    # line 변수에 문자열이 저장되면
    if line:
        # 불러온 문자열을 print_line 함수로 출력
        print_line(line, encoding, errors)
        return main(language_file, encoding, errors)

def print_line(line, encoding, errors):
    next_lang = line.strip()
    raw_bytes = next_lang.encode(encoding, errors = errors)
    cooked_string = raw_bytes.decode(encoding, errors = errors)

    print(raw_bytes, "<===>", cooked_string)

languages = open('./text/languages.txt', encoding="utf-8")

main(languages, input_encoding, error)


# ASCII conversion
print(0b1011010) #prints out 90
print(ord('Z')) #prints out 90
print(chr(90)) #prints out Z

zed_shaw_fullname = 'Zed A. Shaw'
zed_shaw_numbered = [ord(c) for c in zed_shaw_fullname]
print(zed_shaw_numbered)