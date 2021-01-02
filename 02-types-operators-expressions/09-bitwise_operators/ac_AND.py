if __name__ == "__main__":
    m = 1000
    n = 3
    d = 177
    #try:
    #    print("%d & 0177 = %d" % m, m & 0177);
    ##except SyntaxError as e:
    #except:
    #    pass

    #print("%d & 177 = %d" % m, m & 177)
    print("%d & %d = %d" % (m, d, m & d))
    print(f"  i.e.")
    #print("  %d:b & 177 = %d" % (m, m & 177))
    print(f"  {m:b} & {d:b} = {m & d:b}")
    
    #try:
    #    print("%d & 0177 = %d" % n, n & 0177)
    #except SyntaxError as e:
    #    pass
    
    #print("%d & 177 = %d" % n, n & 177)
    print("%d & %d = %d" % (n, d, n & d))
    print(f"  i.e.")
    print(f"  {n:b} & {d:b} = {n & d:b}")
    print()

    print(f"1*8**2 + 7*8 + 7*1 = {1*8**2 + 7*8 + 7*1}")
    d = 127
    print("%d & %d = %d" % (m, d, m & d))
    print(f"  i.e.")
    print(f"  {m:b} & {d:b} = {m & d:b}")

    print("%d & %d = %d" % (n, d, n & d))
    print(f"  i.e.")
    print(f"  {n:b} & {d:b} = {n & d:b}")
