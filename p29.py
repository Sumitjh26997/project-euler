terms = []

for a in range(2,101):
    for b in range(2,101):
        terms.append(a ** b)
    terms.sort()

dterms = list(set(terms))
print(len(dterms))