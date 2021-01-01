# Exercise 17
# More Files

from sys import argv
from os.path import exists

# copying text - one line version
# open(argv[2], 'w').write(open(argv[1]).read())

# 파일을 open한 뒤 이어서 바로 읽는 경우
# --- open(from_file).read()
# 별도로 닫아줄 필요 없다, open() -> read() 실행 후 자동으로 close된다.

script, from_file, to_file = argv

print(f"Copying from {from_file} to {to_file}")

# we could do these two on one lne, how?
in_file = open(from_file)
indata = in_file.read()

print(f"The input file is {len(indata)} bytes long")

print(f"Does the output file exist? {exists(to_file)}")
print("Ready, hit RETURN to continue, CTRL-C to abort.")
input('waiting for input...')

out_file = open(to_file, 'w')
out_file.write(indata)

print('Alright, all done.')

out_file.close()
in_file.close()
