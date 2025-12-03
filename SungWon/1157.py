import sys

input = sys.stdin.readline

word = input().strip()

counts = [0] * 26
for c in word:
    counts[ord(c.upper()) - ord("A")] += 1

max_count = max(counts)
if counts.count(max_count) > 1:
    print("?")
    exit(0)

max_index = counts.index(max_count)
print(chr(max_index + ord("A")))
