import pylib

if __name__ == "__main__":
    x, y = 6, 2.3
    l=[1.2,5,6,4,3.6]

    answer = pylib.pymult(x, y)
    s=pylib.pysum([1.2,5,6,4,3.6])
    print(f"    In Python: int: {x} float {y:.1f} return val {answer:.1f}")
    print(f"sum={s:.1f}")