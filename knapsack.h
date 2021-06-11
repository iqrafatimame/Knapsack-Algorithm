#pragma once
#include<iostream>
using namespace std;
class knapsack
{

private:
	int w;
public:
	// Constructor
	knapsack();
	// Parametrized Constructor
	knapsack(int _w);
	int getMaximum(int x, int y);
	int knapsackAlgorithm(int n, int _w, int _weight[], int _value[]);
	int getResult(int n, int weight[], int value[]);
};

