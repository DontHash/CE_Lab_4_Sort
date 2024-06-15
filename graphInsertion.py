import matplotlib.pyplot as plt

# Input sizes and corresponding execution times (in microseconds)
input_sizes = [20, 1000, 10000, 20000, 50000, 100000, 200000, 500000]
execution_times = [0, 0, 35, 91, 654, 2640, 10305, 69709]  # Example times, replace with actual measurements

plt.plot(input_sizes, execution_times, marker='o')
plt.title('Input Size vs. Execution Time')
plt.xlabel('Input Size')
plt.ylabel('Execution Time (milliseconds)')
plt.grid(True)
plt.show()
