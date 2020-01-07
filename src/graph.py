import matplotlib.pyplot as plt
import numpy as np
import math
import sys

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
    #print(content)
    
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