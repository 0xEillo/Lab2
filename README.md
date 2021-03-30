Question 1 results:
![Q](https://user-images.githubusercontent.com/67156692/112886246-93f40080-90c9-11eb-9878-2ad19966d535.png)
For experiment 1 we were tasked to find the overhead of tracer.event(). To do this we ran events and measure the delay/time between each event. The delays were very consistent which meant the mean and median were very similar. The time between was the noted overhead and we were able to find the average overhead through that which we used to find the CPU as noted below.

The experiment results show us that there are consistent overheads. The CPU for a tinypico  is 240mhz which is 24000hz clock cycles in a second. Meaning a cycle = 1/24000. In our calculations the function appears to take on average 0.000175. Based on notes above we know the frequency is 24000hz meaning 24000 commands are executed a second. To find the CPU we divide the overhead by the clock speed, therefore, the overhead of our experiment is 0.000175/24000 = 7.29e-9

Question 2 results:
![Q2](https://user-images.githubusercontent.com/67156692/112886348-b84fdd00-90c9-11eb-9479-6e7806abf1f2.png)

For question 2 we were tasked to find the overhead of the loop() function. Similarly to question 1 we did this by measuring the time between events which were at the end of the loop and at the start as this would be the delay in returning and restarting the loop. Thus through these measurements and averaging we were able to find the overhead of the loop().

Question 5 Histogram:
<img width="646" alt="Histogram picture" src="https://user-images.githubusercontent.com/67156692/112885757-06b0ac00-90c9-11eb-9750-be7d5558b463.PNG">
