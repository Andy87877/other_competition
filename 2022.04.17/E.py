from scipy import spatial
List1 = []
List2 = []

n = int(input())
for i in range(n):
    List1.append(n)
for i in range(n):
    List2.append(n)
result = 1 - spatial.distance.cosine(List1, List2)
print("%.2f"%(result))