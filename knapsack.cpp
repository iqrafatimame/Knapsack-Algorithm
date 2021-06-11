#include "knapsack.h"

knapsack::knapsack() : w(0){}
knapsack::knapsack(int _w): w(_w){ }

		// input: two intgers x and y
		// Output: return the maximum of two

		int knapsack::getMaximum(int x, int y) {
			if (x > y) {
				return x;
			}
			else {
				return y;
			}
		}

		// input: Capacity w, 
		//        array of wight items
		//        array of values of weights
		// Output: Solution (Maximum total value in knapsack)
		int knapsack:: knapsackAlgorithm(int n, int _w, int _weight[], int _value[]) {
			int i, w;
			int** K = new int* [n + 1];
			for (int i = 0; i < n + 1; i++)
				K[i] = new int[_w + 1];

			// Build table K[][] in bottom up manner
			for (i = 0; i <= n; i++)
			{
				for (w = 0; w <= _w; w++)
				{
					// Base Case
					if (i == 0 || w == 0)
						K[i][w] = 0;

					else if (_weight[i - 1] <= w)
						K[i][w] = getMaximum(_value[i - 1] +
							K[i - 1][w - _weight[i - 1]],
							K[i - 1][w]);
					else
						K[i][w] = K[i - 1][w];
				}
			}
			return K[n][_w];
		}

		// Compute the final result
		int knapsack:: getResult(int n, int weight[], int value[]) {
			return knapsackAlgorithm(n, w, weight, value);
		}
