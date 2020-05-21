import matplotlib.pyplot as plt
import numpy as np
import math
import sys
from scipy.interpolate import make_interp_spline, BSpline


def main():
    #filename ="EXAMPLE.TXT"
    filename = sys.argv[1]
    sensor1 = []
    sensor2 = []
    #line = file.readline().split()



    with open(filename) as f:
        content = f.readlines()
    # you may also want to remove whitespace characters like `\n` at the end of each line
    content = [x.strip() for x in content]
    if len(content) > 100:
        content = content[750:900]
        pass
    print(content)
    
    for line in content:
        line = line.split(" ")
        if len(line) == 2:
            if line[0] == "0-":
                sensor1.append(line[1])
            if line[0] == "1-":
                sensor2.append(line[1])                    
    
    t1 = range(0, len(sensor1))
    t2 = range(0, len(sensor2))
    
    fig=plt.figure()
    plt.xlabel("Pressure")
    plt.ylabel("Time")
    plt.title('Sensor1')
    plt.plot(t1, sensor1)
    plt.plot(t2, sensor2, color='green')
    plt.show()
    
 
if __name__ == '__main__':
    main()



"""
from scipy.interpolate import make_interp_spline, BSpline

# 300 represents number of points to make between T.min and T.max
xnew = np.linspace(T.min(), T.max(), 300) 

spl = make_interp_spline(T, power, k=3)  # type: BSpline
power_smooth = spl(xnew)

plt.plot(xnew, power_smooth)
plt.show()

"""