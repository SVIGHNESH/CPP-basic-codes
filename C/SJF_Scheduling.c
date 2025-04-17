#include <stdio.h>
#include <stdbool.h>

struct Process {
    int pid;
    int arrival_time;
    int burst_time;
    int waiting_time;
    int turnaround_time;
    bool completed;
};

int main() {
    int n, time = 0, completed = 0;
    float total_waiting = 0, total_turnaround = 0;

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    struct Process p[n]; // Allocate array for processes

    for (int i = 0; i < n; i++) {
        p[i].pid = i + 1;
        printf("Enter Arrival Time and Burst Time for Process %d: ", p[i].pid);
        scanf("%d %d", &p[i].arrival_time, &p[i].burst_time);
        p[i].completed = false;
    }

    while (completed < n) {
        int idx = -1;
        int min_burst = 99999;

        for (int i = 0; i < n; i++) {
            if (p[i].arrival_time <= time && !p[i].completed) {
                if (p[i].burst_time < min_burst) {
                    min_burst = p[i].burst_time;
                    idx = i;
                } else if (p[i].burst_time == min_burst) {
                    if (p[i].arrival_time < p[idx].arrival_time) {
                        idx = i;
                    }
                }
            }
        }

        if (idx != -1) {
            time += p[idx].burst_time;
            p[idx].turnaround_time = time - p[idx].arrival_time;
            p[idx].waiting_time = p[idx].turnaround_time - p[idx].burst_time;

            total_turnaround += p[idx].turnaround_time;
            total_waiting += p[idx].waiting_time;

            p[idx].completed = true;
            completed++;
        } else {
            time++; // CPU idle time
        }
    }

    printf("\nSJF (Shortest Job First) Scheduling:\n");
    printf("PID\tArrival\tBurst\tWaiting\tTurnaround\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%d\t%d\t%d\t%d\n", 
            p[i].pid, 
            p[i].arrival_time, 
            p[i].burst_time, 
            p[i].waiting_time, 
            p[i].turnaround_time);
    }

    printf("\nAverage Waiting Time: %.2f", total_waiting / n);
    printf("\nAverage Turnaround Time: %.2f\n", total_turnaround / n);

    return 0;
}
