import threading

def print_saga():
    for i in range(100):
        print(i," saga")

def print_bps():
    for i in range(100):
        print(i," bps_saga")

# Create two threads, each of which will run one of the functions.
thread1 = threading.Thread(target=print_saga)
thread2 = threading.Thread(target=print_bps)

# Start the two threads.
thread1.start()
thread2.start()

# Wait for the two threads to finish.
thread1.join()
thread2.join()
