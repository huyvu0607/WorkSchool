//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//bool b[100];
//int x[100];
//
//bool test(int a[100], int n, int& s) {
//	for (int i = 0; i < n; i++) {
//		s += a[i];
//	}
//	if (s % 2 == 0) {
//		return true;
//	}
//	else
//		return false;
//}
//
//bool kt(int s, int n) {
//	int d = 0;
//	for (int i = 0; i < n; i++) {
//		d += x[i];
//	}
//	if (d == s)
//		return true;
//	else
//		return false;
//}
//
//void printarr(int n) {
//	cout << "{";
//	for (int i = 0; i < n; i++) {
//		cout << x[i];
//		if (i != (n - 1))
//			cout << ",";
//	}
//	cout << "}" << endl;
//}
//
//
//int xuat(int a[100], int n) {
//	cout << "{";
//	for (int i = 0; i < n; i++) {
//		if (b[i] == false) {
//			b[i] = true;
//		}
//	}
//	while (true) {
//
//	}
//	return 0;
//}
//
//int num = 0;
//void Sum(int a[100], int k, int n, int s) {
//	for (int i = 0; i < n; i++) {
//		if (b[i]) {
//			x[k] = a[i];
//			if (k == n -1 and kt(s, n /2 )) {
//				printarr(n/2); 
//				for (int i = 0; i < n; i++) {
//					cout << b[i];
//				}
//				cout << endl;
//				return;
//			}
//			else {
//				b[i] = false;
//				Sum(a, k +1, n, s);
//				b[i] = true;
//			}
//		}
//	}
//}
//
//void out(int a[100], int n) {
//	int s = 0;
//	int d = 0;
//	if (test(a, n, s) == true) {
//		cout << "Mang tren co the chia duoc 2 mang bang nhau: " << endl;
//		Sum(a, 0, n, s / 2);
//	}
//	else {
//		cout << "Mang tren khong the chia duoc 2 mang bang nhau" << endl;
//	}
//}
//int main()
//{
//	int n;
//	int a[100];
//	cout << "n = ";
//	cin >> n;
//	cout << "nhap mang: " << endl;
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//	for (int i = 0; i < n; i++) {
//		b[i] = true;
//	}
//	out(a, n);
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//void findCombinations(int A[], int n, int B, int combination[], int& index, int start) {
//    if (B == 0) {
//        cout << "{ ";
//        for (int i = 0; i < index; ++i) {
//            cout << combination[i] << " ";
//        }
//        cout << "}" << endl;
//        return;
//    }
//
//    for (int i = start; i < n; ++i) {
//        if (A[i] <= B) {
//            combination[index++] = A[i];
//            findCombinations(A, n, B - A[i], combination, index, i);
//            --index;
//        }
//    }
//}
//
//void findCombinations(int A[], int n, int B) {
//    int combination[1000]; 
//    int index = 0;
//    findCombinations(A, n, B, combination, index, 0);
//}
//
//int main() {
//    int a[100];
//    int n ;
//    int B ;
//    cout << "Nhap so luong phan tu: "; cin >> n;
//    cout << "Nhap phan tu: " << endl;
//    for (int i = 0; i < n; i++) {
//        cin >> a[i];
//    }
//    cout << "Nhap so muon bang: "; cin >> B;
//    cout << "Cac to hop co tong bang: " << B << ":" << endl;
//
//    findCombinations(a, n, B);
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//bool tim_vung(int nums[], int n, int sum1, int sum2, int subset1[], int subset2[], int& size1, int& size2) {
//    if (n == 0) {
//        if (sum1 == sum2) {
//            return true;
//        }
//        return false;
//    }
//
//    subset1[size1++] = nums[n - 1];
//    if (tim_vung(nums, n - 1, sum1 + nums[n - 1], sum2, subset1, subset2, size1, size2)) {
//        return true;
//    }
//    size1--;
//
//    subset2[size2++] = nums[n - 1];
//    if (tim_vung(nums, n - 1, sum1, sum2 + nums[n - 1], subset1, subset2, size1, size2)) {
//        return true;
//    }
//    size2--;
//
//    return false;
//}
//
//bool kiem_tra_vung(int nums[], int size, int subset1[], int subset2[], int& size1, int& size2) {
//    return tim_vung(nums, size, 0, 0, subset1, subset2, size1, size2);
//}
//
//int main() {
//    int size;
//    cout << "Nhap so luon n : "; cin >> size;
//    int nums[100];
//    cout << "Nhap phan tu: " << endl;
//    for (int i = 0; i < size; i++) {
//        cin >> nums[i];
//    }
//
//    int subset1[100], subset2[100];
//    int size1 = 0, size2 = 0;
//
//    if (kiem_tra_vung(nums, size, subset1, subset2, size1, size2)) {
//        cout << "Mang tren co the chia duoc 2 mang bang nhau:" << endl;
//        cout << "Tap con 1: ";
//        for (int i = 0; i < size1; ++i) {
//            cout << subset1[i] << " ";
//        }
//        cout << endl;
//        cout << "Tap con 2: ";
//        for (int i = 0; i < size2; ++i) {
//            cout << subset2[i] << " ";
//        }
//        cout << endl;
//    }
//    else {
//        cout << "Khong the chia thanh 2 tap con bang nhau" << endl;
//    }
//
//    return 0;
//}



//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//void QuickSort(int a[], int left, int right)
//{
//	int i, j, x, t;
//	x = a[(left + right) / 2]; i = left; j = right;
//	cout << x << endl;
//	do {
//		while (a[i] < x) i++;
//		while (a[j] > x) j--;
//		if (i <= j) {
//			t = a[i]; a[i] = a[j]; a[j] = t;
//			i++; j--;
//		}
//	} while (i < j);
//	if (left < j) QuickSort(a, left, j);
//	if (i < right) QuickSort(a, i, right);
//}
//
//int main() {
//	int n;
//	cin >> n;
//	int a[10];
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//
//	QuickSort(a, 0, n - 1);
//
//	for (int i : a) {
//		cout << i << " ";
//	}
//	return 0;
//}
//#include <iostream>
//#include <algorithm>
//#include <cstdlib> // for rand() and srand()
//#include <ctime>   // for time()
//#include <math.h>
//using namespace std;
//bool NT(int n) {
//	if (n < 2) return false;
//	for (int i = 2; i < sqrt(n); i++) {
//		if (n % i == 0) return false;
//
//	}
//		return true;
//}
//
//int last_NT(int a[], int left, int right) {
//	if (right < left) {
//		return -1;
//	}
//	if (right == left)
//		return (NT(a[right]) == true) ? a[right] : -1;
//	int mid = left + (right - left) / 2;
//	int right_result = last_NT(a, mid + 1, right);
//
//	if (NT(right_result) == true) return right_result;
//	
//	return last_NT(a, left, mid);
//}
//
//int first_positive(int a[], int left, int right) {
//	if (right < left) {
//		return -1;
//	}
//	if (right == left)
//		return (a[left] > 0) ? a[left] : -1;
//
//	int mid = left + (right - left) / 2;
//	int left_result = first_positive(a, left, mid);
//	if (left_result != -1) return left_result;
//
//	return first_positive(a, mid + 1, right);
//
//
//}
//int main() {
//	int n;
//	cout << "Nhap so luong phan tu:";
//	cin >> n;
//	cout << endl;
//	srand(static_cast<unsigned>(time(0)));
//	int a[100];
//	for (int i = 0; i < n; i++) {
//		a[i] = (rand() % 201) - 100;
//	}
//
//	for (int i = 0; i < n; i++) {
//		cout << a[i] << " ";
//	}
//	cout << endl;
//	int positive = first_positive(a, 0, n - 1);
//	if (positive != -1)
//		cout << "so duong dau tien  : " << positive << endl;
//	else
//		cout << "khong co so duong nao trong mang" << endl;
//	
//	int nt = last_NT(a, 0, n - 1);
//	if (nt != -1)
//		cout << "so NT cuoi cung la: " << nt << endl;
//	else
//		cout << "Khong co so nguyen to nao" << endl;
//	return 0;
//}

//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int power(int a, int n) {
//	if (n == 0) return 1;
//	if (n == 1) return a;
//
//	if (n % 2 == 0) {
//		return power(a, n/2) * power(a,n/2);
//	}
//	else
//		return a * power(a,n - 1);
//
//}
//int main() {
//	int n, a;
//	cout << "Nhap a mu n voi a = "; cin >> a;
//	cout << "voi n = "; cin>> n;
//
//	cout << power(a, n);
//
//	return 0;
//}

//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int equal(int a[], int left, int right, int k) {
//	if (left > right)
//		return 0;
//
//	if (left == right)
//		return (a[left] == k) ? 1 : 0;
//
//	int mid = left + (right - left)/ 2;
//	return equal(a, left, mid, k) + equal(a, mid + 1, right, k);
//	
//
//}
//
//int between(int a[], int left, int right, int x,int y) {
//	if (left > right)
//		return 0;
//
//	if (left == right)
//		return (a[left] > x and a[left] < y) ? 1 : 0;
//
//	int mid = left + (right - left) / 2;
//	return between(a, left, mid, x,y) + between(a, mid + 1, right, x,y);
//
//
//}
//
//int main() {
//	int n, a[100],k;
//	cout << "voi n = "; cin >> n;
//	cout << "K = "; cin >> k;
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//
//	cout << "so phan tu bang k : " << equal(a, 0, n - 1,k);
//
//	cout << endl;
//	int x, y;
//	cout << "nhap vao 2 so (x<y)" << endl;
//	cout << "x : "; cin >> x;
//	cout << "y: "; cin >> y;
//
//	cout << "So phan tu o giua x va y: " << between(a, 0, n - 1, x, y);
//	return 0;
//}



#include <iostream>
#include <vector>

using namespace std;

int QuickSort(int a[], int left, int right, int &k)
{
	int i, j, x, t;
	x = a[(left + right) / 2]; i = left; j = right;
	do {
		while (a[i] < x) i++;
		while (a[j] > x) j--;
		if (i <= j) {
			t = a[i]; a[i] = a[j]; a[j] = t;
			i++; j--;
		}
	} while (i < j) ;
	//if (i == j) i++;
	if (k != 0) {
		if ((right - i + 1) >= k) {
			if (i < right) return QuickSort(a, i, right, k);
			return a[right];
		}
		else {
			k = k - (right - i + 1);
			if (left < j) return QuickSort(a, left, j, k);
			return a[left];
		}
	}
}

int main() {
	int n;
	cout << "so luong phan tu: ";
	cin >> n;
	cout << "Nhap gia tri cac phan tu: " << endl;
	int a[10];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int k;
	cout << "k: ";
	cin >> k;

	cout<<"phan tu lon thu k: "<< QuickSort(a, 0, n - 1, k);

	return 0;
}