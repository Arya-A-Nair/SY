import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
df = pd.read_csv("dataset.csv")
c1 = df["Maths Score"]
c2 = df["Compressed Marks"]
correlation = c1.corr(c2)
def relation():
    if correlation == 1.0:
        print("Relation: Linear")
    else:
        print("Relation: Not Linear")

def dfmean1():
    maths_marks = df["Maths Score"]
    total1 = maths_marks.sum()
    count1 = len(maths_marks.axes[0])
    mean1 = total1/count1
    print("x(mean) =", mean1)


def dfmean2():
    compressed_marks = df["Compressed Marks"]
    total2 = compressed_marks.sum()
    count2 = len(compressed_marks.axes[0])
    mean2 = total2/count2
    print("y(mean) =", mean2)
print("\n")
relation()
dfmean1()
dfmean2()

def estimate_coef(x, y):
    n = np.size(x)
    m_x = np.mean(x)
    m_y = np.mean(y)
    SS_xy = np.sum(y*x) - n*m_y*m_x
    SS_xx = np.sum(x*x) - n*m_x*m_x
    global W_0
    global W_1
    W_1 = SS_xy / SS_xx
    W_0 = m_y - W_1*m_x
    return (W_0, W_1)
def plot_regression_line(x, y, b):
    plt.scatter(x, y, color="m",
    marker="o", s=30)
    y_pred = b[0] + b[1]*x
    plt.plot(x, y_pred, color="g")
    plt.xlabel('x')
    plt.ylabel('y')
    plt.show()

def main():
    x = df["Maths Score"]
    y = df["Compressed Marks"]
    b = estimate_coef(x, y)
    print("Estimated coefficients:\nW_0 = {} \
    \nb_1 = {}".format(b[0], b[1]))
    plot_regression_line(x, y, b)
if __name__ == "__main__":
    main()
y = int(input("Input the value for Maths Score: "))
x = y*W_1 +W_0
print("The missing value in the Compressed Marks column will be:", x)
