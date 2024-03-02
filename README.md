# Birthday-Paradox
This repository contains a C++ file birthday_paradox.cpp that takes input the probability of having two birthdays on the same day ($p$) and outputs the minimum number of people required to have a probability $p$ and also stores the output in the text file birthday_paradox_output.txt

Starting from $k = 2$, the program calculates the probability for this $k$ using the formula $p = 1 - \dfrac{\binom{365}{k} * k!}{365^k}$. It keeps on increasing $k$ untill the probability is greater than $p$.

Given $k$, the function named *getProbability* calculates the probability of having two birthdays on the same day using the above formula.

## For $p = 0.5$, the minimum number of people required is 23.
The link for this github repository is [https://github.com/debrajk22/Birthday-Paradox](https://github.com/debrajk22/Birthday-Paradox)
