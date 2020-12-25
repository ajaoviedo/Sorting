#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm>
#include <chrono>
using namespace std;

void swap(int &, int &);
void selectionSort(vector<int> &, int);
void insertionSort(vector<int> &, int);
int partition(vector<int> &, int, int);
int partitionR(vector<int>&, int, int);
void quickSort(vector<int> &, int, int);

void swap(int &l, int &r)
{
	int temp = l;
	l = r;
	r = temp;
}

void selectionSort(vector<int> &v, int n)
{
	auto start = chrono::steady_clock::now();
	for (int i = 0; i < n - 1; i++)
	{
		int min = i;
		for (int j = i + 1; j < n; j++)
		{
			if (v[j] < v[min])
				min = j;
		}
		swap(v[min], v[i]);
	}
	auto end = chrono::steady_clock::now();
	auto total = chrono::duration<float>(end - start);
	cout << total.count() << "\n";
}

void insertionSort(vector<int> &v, int n)
{
	auto start = chrono::steady_clock::now();
	int w;
	for (int i = 0; i < n; i++)
	{
		w = v[i];
		int j = i - 1;
		while (j >= 0 && v[j] > w)
		{
			v[j + 1] = v[j];
			j--;
		}
		v[j + 1] = w;
	}
	auto end = chrono::steady_clock::now();
	auto total = chrono::duration<float>(end - start);
	cout << total.count() << "\n";
}

int partition(vector<int> &v, int l, int h)
{
	int piv = v[h];
	int i = l-1;
	for (int j = l; j <= h - 1; j++)
	{
		if (v[j] <= piv)
		{
			i++;
			swap(v[i], v[j]);
		}
	}
	swap(v[i + 1], v[h]);
	return (i + 1);
}

int partitionR(vector<int>& v, int l, int h)
{
	srand(time(NULL));
	int ran = l + rand() % (h - l);
	swap(v[ran], v[h]);
	return partition(v, l, h);
}

void quickSort(vector<int> &v, int l, int h)
{
	if (l < h)
	{
		int p = partitionR(v, l, h);
		quickSort(v, l, p - 1);
		quickSort(v, p + 1, h);
	}
}

int main()
{
	vector<int> *a1 = new vector<int>;
	vector<int>* a11 = new vector<int>;
	vector<int>* a111 = new vector<int>;
	vector<int>* a2 = new vector<int>;
	vector<int>* a22 = new vector<int>;
	vector<int>* a222 = new vector<int>;
	vector<int>* a3 = new vector<int>;
	vector<int>* a33 = new vector<int>;
	vector<int>* a333 = new vector<int>;
	int sizeA = 10000;

	vector<int>* b1 = new vector<int>;
	vector<int>* b11 = new vector<int>;
	vector<int>* b111 = new vector<int>;
	vector<int>* b2 = new vector<int>;
	vector<int>* b22 = new vector<int>;
	vector<int>* b222 = new vector<int>;
	vector<int>* b3 = new vector<int>;
	vector<int>* b33 = new vector<int>;
	vector<int>* b333 = new vector<int>;
	int sizeB = 20000;

	vector<int>* c1 = new vector<int>;
	vector<int>* c11 = new vector<int>;
	vector<int>* c111 = new vector<int>;
	vector<int>* c2 = new vector<int>;
	vector<int>* c22 = new vector<int>;
	vector<int>* c222 = new vector<int>;
	vector<int>* c3 = new vector<int>;
	vector<int>* c33 = new vector<int>;
	vector<int>* c333 = new vector<int>;
	int sizeC = 50000;

	vector<int>* d1 = new vector<int>;
	vector<int>* d11 = new vector<int>;
	vector<int>* d111 = new vector<int>;
	vector<int>* d2 = new vector<int>;
	vector<int>* d22 = new vector<int>;
	vector<int>* d222 = new vector<int>;
	vector<int>* d3 = new vector<int>;
	vector<int>* d33 = new vector<int>;
	vector<int>* d333 = new vector<int>;
	int sizeD = 100000;

	vector<int>* e1 = new vector<int>;
	vector<int>* e2 = new vector<int>;
	vector<int>* e3 = new vector<int>;
	int sizeE = 10;

	srand(time(NULL));

	for (int i = 0; i < sizeA; i++)
	{
		a1->push_back(rand() % 10000);
		a11->push_back(a1->at(i));
		a111->push_back(a1->at(i));
		a2->push_back(a1->at(i));
		a22->push_back(a1->at(i));
		a222->push_back(a1->at(i));
		a3->push_back(a1->at(i));
		a33->push_back(a1->at(i));
		a333->push_back(a1->at(i));
	}
	for (int i = 0; i < sizeB; i++)
	{
		b1->push_back(rand() % 20000);
		b11->push_back(b1->at(i));
		b111->push_back(b1->at(i));
		b2->push_back(b1->at(i));
		b22->push_back(b1->at(i));
		b222->push_back(b1->at(i));
		b3->push_back(b1->at(i));
		b33->push_back(b1->at(i));
		b333->push_back(b1->at(i));
	}
	for (int i = 0; i < sizeC; i++)
	{
		c1->push_back(rand() % 50000);
		c11->push_back(c1->at(i));
		c111->push_back(c1->at(i));
		c2->push_back(c1->at(i));
		c22->push_back(c1->at(i));
		c222->push_back(c1->at(i));
		c3->push_back(c1->at(i));
		c33->push_back(c1->at(i));
		c333->push_back(c1->at(i));
	}
	for (int i = 0; i < sizeD; i++)
	{
		d1->push_back(rand() % 100000);
		d11->push_back(d1->at(i));
		d111->push_back(d1->at(i));
		d2->push_back(d1->at(i));
		d22->push_back(d1->at(i));
		d222->push_back(d1->at(i));
		d3->push_back(d1->at(i));
		d33->push_back(d1->at(i));
		d333->push_back(d1->at(i));
	}

	sort(a2->begin(), a2->begin() + sizeA);
	sort(a22->begin(), a22->begin() + sizeA);
	sort(a222->begin(), a222->begin() + sizeA);
	
	sort(a3->begin(), a3->begin() + sizeA, greater<int>());
	sort(a33->begin(), a33->begin() + sizeA, greater<int>());
	sort(a333->begin(), a333->begin() + sizeA, greater<int>());

	cout << "Insertion Sort\n";
	insertionSort(*a1, sizeA);
	insertionSort(*a2, sizeA);
	insertionSort(*a3, sizeA);
	cout << "\n";

	cout << "Selection Sort\n";
	selectionSort(*a11, sizeA);
	selectionSort(*a22, sizeA);
	selectionSort(*a33, sizeA);
	cout << "\n";
	
	cout << "Quick Sort\n";
	auto start = chrono::steady_clock::now();
	quickSort(*a111, 0, sizeA - 1);
	auto end = chrono::steady_clock::now();
	auto total = chrono::duration<float>(end - start);
	cout << total.count() << "\n";
	start = chrono::steady_clock::now();
	quickSort(*a222, 0, sizeA - 1);
	end = chrono::steady_clock::now();
	total = chrono::duration<float>(end - start);
	cout << total.count() << "\n";
	start = chrono::steady_clock::now();
	quickSort(*a333, 0, sizeA - 1);
	end = chrono::steady_clock::now();
	total = chrono::duration<float>(end - start);
	cout << total.count() << "\n";
	cout << "\n";
	
	sort(b2->begin(), b2->begin() + sizeB);
	sort(b22->begin(), b22->begin() + sizeB);
	sort(b222->begin(), b222->begin() + sizeB);

	sort(b3->begin(), b3->begin() + sizeB, greater<int>());
	sort(b33->begin(), b33->begin() + sizeB, greater<int>());
	sort(b333->begin(), b333->begin() + sizeB, greater<int>());

	cout << "Insertion Sort\n";
	insertionSort(*b1, sizeB);
	insertionSort(*b2, sizeB);
	insertionSort(*b3, sizeB);
	cout << "\n";

	cout << "Selection Sort\n";
	selectionSort(*b11, sizeB);
	selectionSort(*b22, sizeB);
	selectionSort(*b33, sizeB);
	cout << "\n";

	cout << "Quick Sort\n";
	start = chrono::steady_clock::now();
	quickSort(*b111, 0, sizeB - 1);
	end = chrono::steady_clock::now();
	total = chrono::duration<float>(end - start);
	cout << total.count() << "\n";
	start = chrono::steady_clock::now();
	quickSort(*b222, 0, sizeB - 1);
	end = chrono::steady_clock::now();
	total = chrono::duration<float>(end - start);
	cout << total.count() << "\n";
	start = chrono::steady_clock::now();
	quickSort(*b333, 0, sizeB - 1);
	end = chrono::steady_clock::now();
	total = chrono::duration<float>(end - start);
	cout << total.count() << "\n";
	cout << "\n";

	sort(c2->begin(), c2->begin() + sizeC);
	sort(c22->begin(), c22->begin() + sizeC);
	sort(c222->begin(), c222->begin() + sizeC);

	sort(c3->begin(), c3->begin() + sizeC, greater<int>());
	sort(c33->begin(), c33->begin() + sizeC, greater<int>());
	sort(c333->begin(), c333->begin() + sizeC, greater<int>());

	cout << "Insertion Sort\n";
	insertionSort(*c1, sizeC);
	insertionSort(*c2, sizeC);
	insertionSort(*c3, sizeC);
	cout << "\n";

	cout << "Selection Sort\n";
	selectionSort(*c11, sizeC);
	selectionSort(*c22, sizeC);
	selectionSort(*c33, sizeC);
	cout << "\n";

	cout << "Quick Sort\n";
	start = chrono::steady_clock::now();
	quickSort(*c111, 0, sizeC - 1);
	end = chrono::steady_clock::now();
	total = chrono::duration<float>(end - start);
	cout << total.count() << "\n";
	start = chrono::steady_clock::now();
	quickSort(*c222, 0, sizeC - 1);
	end = chrono::steady_clock::now();
	total = chrono::duration<float>(end - start);
	cout << total.count() << "\n";
	start = chrono::steady_clock::now();
	quickSort(*c333, 0, sizeC - 1);
	end = chrono::steady_clock::now();
	total = chrono::duration<float>(end - start);
	cout << total.count() << "\n";
	cout << "\n";

	sort(d2->begin(), d2->begin() + sizeD);
	sort(d22->begin(), d22->begin() + sizeD);
	sort(d222->begin(), d222->begin() + sizeD);

	sort(d3->begin(), d3->begin() + sizeD, greater<int>());
	sort(d33->begin(), d33->begin() + sizeD, greater<int>());
	sort(d333->begin(), d333->begin() + sizeD, greater<int>());

	cout << "Insertion Sort\n";
	insertionSort(*d1, sizeD);
	insertionSort(*d2, sizeD);
	insertionSort(*d3, sizeD);
	cout << "\n";

	cout << "Selection Sort\n";
	selectionSort(*d11, sizeD);
	selectionSort(*d22, sizeD);
	selectionSort(*d33, sizeD);
	cout << "\n";
	
	cout << "Quick Sort\n";
	start = chrono::steady_clock::now();
	quickSort(*d111, 0, sizeD - 1);
	end = chrono::steady_clock::now();
	total = chrono::duration<float>(end - start);
	cout << total.count() << "\n";
	start = chrono::steady_clock::now();
	quickSort(*d222, 0, sizeD - 1);
	end = chrono::steady_clock::now();
	total = chrono::duration<float>(end - start);
	cout << total.count() << "\n";
	start = chrono::steady_clock::now();
	quickSort(*d333, 0, sizeD - 1);
	end = chrono::steady_clock::now();
	total = chrono::duration<float>(end - start);
	cout << total.count() << "\n";
	cout << "\n";
	
	return 0;
}