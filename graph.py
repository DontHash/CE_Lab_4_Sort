import matplotlib.pyplot as plt
N_array = [5000,10000,15000,20000,25000,30000,40000,50000,60000]
Time_array = [3,17,37,58,85,90,131,195,268]
plt.style.use("dark_background")
plt.figure(figsize=(10,10))
plt.plot(Time_array,N_array,label="Working Size of array")
plt.title("Time complexity of QuickSort",fontsize = 16)
plt.xlabel("Time(ms)",fontsize = 14)
plt.ylabel("Size of working array",fontsize = 14)
plt.legend(loc='lower right')
plt.show()