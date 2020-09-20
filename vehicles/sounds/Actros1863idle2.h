const unsigned int sampleRate = 22050;
const unsigned int sampleCount = 3449;
const signed char samples[] = {
0, -1, -3, -5, -6, -7, -5, -1, 2, 4, 4, 7, 14, 13, 12, 14,
12, -5, -12, -13, -20, -29, -33, -24, -15, -11, -8, 0, 13, 29, 29, 23, 
17, 8, -8, -8, -2, 7, 9, 4, 4, 13, 27, 39, 47, 55, 65, 66, 
60, 50, 40, 21, 2, -14, -18, -15, -11, -3, 2, 7, 8, 3, -2, -3, 
-5, -7, -5, 2, 12, 16, 14, 6, -2, -7, -7, 0, 15, 26, 25, 18, 
13, 6, -8, -18, -25, -31, -27, -13, 6, 23, 38, 49, 41, 32, 28, 28, 
27, 21, 26, 36, 44, 48, 47, 41, 31, 19, 9, 3, 7, 18, 29, 33, 
35, 37, 35, 24, 10, 0, -3, 8, 16, 19, 19, 18, 16, 11, 8, 0, 
-10, -10, -3, 8, 12, 17, 25, 32, 36, 32, 22, 11, 0, -9, -11, -11, 
-16, -18, -18, -22, -32, -49, -62, -68, -57, -16, 9, 25, 27, 19, 9, -6, 
-16, -20, -15, -3, 1, -5, -16, -23, -21, -13, 1, 5, 5, 5, 10, 19, 
31, 39, 42, 44, 48, 57, 65, 67, 62, 51, 33, 4, -7, -12, -15, -21, 
-32, -53, -58, -55, -55, -59, -73, -85, -93, -95, -89, -79, -66, -62, -57, -52, 
-47, -42, -34, -23, -7, 9, 23, 35, 37, 36, 37, 34, 27, 13, 1, -10, 
-12, -2, 7, 4, 16, 38, 65, 78, 74, 70, 50, 45, 53, 56, 49, 26, 
17, 27, 39, 41, 12, -5, -6, -7, -16, -32, -53, -66, -62, -44, -24, -32, 
-49, -59, -64, -60, -51, -42, -49, -62, -63, -59, -70, -98, -122, -127, -119, -105, 
-94, -80, -68, -60, -43, -18, 20, 16, 2, 3, 16, 34, 51, 71, 77, 67, 
56, 37, 22, 17, 24, 37, 39, 39, 52, 72, 82, 74, 53, 42, 35, 31, 
22, 13, 0, -10, -14, -15, -14, -13, -3, 6, 10, 16, 26, 22, 5, -13, 
-22, -32, -39, -33, -35, -37, -33, -18, -11, -18, -24, -33, -32, -20, -3, 0, 
-10, -22, -26, -21, -18, -12, -7, -7, -7, 0, 5, 1, -3, -8, -10, 5, 
14, 21, 26, 32, 35, 35, 42, 43, 40, 37, 39, 33, 21, 8, -5, -7, 
5, 14, 24, 23, 13, 3, 7, 9, 5, -5, -17, -30, -24, -22, -26, -28, 
-32, -46, -54, -58, -63, -71, -78, -75, -61, -47, -35, -28, -19, -7, 11, 28, 
37, 39, 44, 56, 63, 62, 59, 51, 28, 7, -11, -23, -26, -20, -15, -10, 
-4, -1, -7, -19, -28, -35, -41, -45, -45, -32, -12, 6, 11, 10, 12, 15, 
14, 10, 2, -7, -11, -3, 10, 13, 4, -4, -2, -2, -8, -23, -40, -56, 
-58, -52, -38, -24, -17, -12, -9, -4, 0, 7, 27, 34, 32, 19, 4, -5, 
-15, -15, -10, -3, -4, -10, -21, -29, -33, -30, -25, -21, -20, -19, -11, 3, 
22, 41, 35, 22, 15, 24, 43, 58, 45, 17, -16, -41, -35, -10, 11, 16, 
3, -13, -10, 3, 9, 13, 23, 37, 59, 62, 47, 21, -4, -12, 10, 41, 
65, 76, 73, 53, 42, 37, 31, 23, 19, 23, 22, 20, 25, 38, 58, 59, 
54, 55, 64, 71, 66, 55, 47, 44, 45, 39, 21, 15, 15, 20, 27, 45, 
60, 68, 64, 51, 36, 17, 11, 4, -6, -16, -21, -13, -4, -1, -5, -12, 
-24, -36, -44, -46, -48, -51, -51, -39, -25, -14, -4, 1, 0, -5, -13, -21, 
-30, -30, -24, -19, -12, -4, 6, 15, 9, 3, 2, 4, 6, 3, -6, -13, 
-13, -7, 0, -4, -12, -14, -9, 2, 12, 10, 10, 12, 18, 11, -11, -34, 
-48, -50, -43, -18, 0, 4, 0, 0, 8, 20, 19, 12, 4, 2, 13, 20, 
22, 17, 8, -1, -4, 5, 20, 31, 29, 14, -19, -30, -27, -18, -17, -27, 
-26, -14, 4, 23, 36, 32, 21, 18, 22, 18, 4, -1, 11, 22, 25, 23, 
11, -1, -3, -2, -1, -1, -15, -19, -10, 8, 19, 18, 20, 13, -9, -32, 
-39, -32, -20, -15, -20, -29, -43, -56, -59, -52, -38, -20, 6, 34, 25, 16, 
22, 40, 47, 30, 11, 4, -1, -12, -14, -10, -5, 3, 10, 12, -13, -17, 
-7, -11, -34, -56, -54, -42, -25, -18, -23, -35, -30, -18, -11, -10, -9, -5, 
-6, -9, -10, -9, -12, -18, -30, -31, -11, 3, -8, -18, -22, -26, -27, -16, 
-7, -2, 2, 10, 13, 9, 11, 8, 0, -7, -9, -4, -4, -9, -14, -25, 
-33, -26, -25, -18, 0, 15, 15, 0, -10, -7, 0, 7, 9, -2, -18, -29, 
-32, -22, -15, -10, -9, -13, -17, -28, -35, -35, -27, -12, 8, 15, 0, -16, 
-20, -11, 1, -1, -9, -17, -21, -21, -17, -22, -28, -22, -3, 16, 23, 16, 
5, 1, 4, 13, 25, 37, 42, 39, 33, 11, 1, 2, 3, -2, -5, 4, 
7, 9, 16, 18, 16, 20, 23, 13, -10, -25, -18, -9, -2, 4, 11, 14, 
7, 0, -7, -13, -14, -4, 1, 8, 19, 30, 32, 14, 5, 0, 0, -2, 
-8, -16, -17, -9, 4, 14, 14, 8, 7, 6, 7, 5, -9, -21, -33, -41, 
-37, -23, -4, -3, -7, -6, -2, 8, 18, 31, 33, 18, 2, -2, 5, 12, 
15, 16, 25, 30, 27, 20, 13, 10, 15, 15, 13, 9, 6, 9, 18, 17, 
11, 14, 23, 29, 22, 9, -2, -6, 0, 15, 10, -4, -20, -31, -35, -26, 
-15, -8, -7, -13, -20, -22, -25, -22, -13, -9, -28, -48, -53, -44, -28, -7, 
7, -2, -14, -23, -27, -19, -1, 15, 22, 27, 29, 20, 11, 7, 13, 19, 
20, 12, 3, -7, -17, -24, -18, -10, -4, -4, -5, -11, -20, -17, -13, -12, 
-11, -9, -7, -9, -10, -11, -9, 6, 16, 22, 24, 22, 17, 8, 7, 9, 
14, 22, 30, 26, 16, 6, 0, -2, 6, 23, 38, 43, 37, 24, 6, -1, 
-6, -9, -4, 9, 22, 19, 8, -1, -5, -10, -13, -16, -25, -41, -50, -48, 
-45, -39, -21, 3, 21, 30, 29, 29, 30, 26, 20, 17, 17, 22, 31, 40, 
47, 51, 54, 54, 49, 44, 38, 31, 22, 14, 9, 14, 31, 45, 42, 24, 
2, -12, -7, 6, 19, 29, 30, 20, 6, -9, -20, -26, -22, -15, -7, 1, 
9, 18, 24, 20, 12, 5, 9, 25, 32, 34, 37, 44, 50, 50, 44, 37, 
33, 36, 41, 44, 45, 45, 41, 35, 23, 3, -17, -24, -14, -2, 0, 12, 
23, 27, 24, 13, -2, -26, -42, -48, -52, -35, -32, -27, -17, -11, -9, -21, 
-27, -27, -37, -47, -36, -25, -24, -26, -25, -19, -21, -25, -28, -35, -42, -43, 
-41, -39, -42, -38, -27, -17, -23, -22, -8, 0, 4, -12, -22, -32, -42, -43, 
-43, -46, -63, -67, -46, -27, -30, -40, -22, -7, -7, -7, -18, -35, -43, -44, 
-48, -56, -57, -44, -28, -17, -17, -18, -11, -11, -15, -25, -33, -35, -35, -29, 
-25, -29, -34, -25, -14, -14, -15, -7, -2, -1, 3, 7, -3, -16, -5, 8, 
11, 7, 8, 9, -7, -13, -24, -32, -31, -27, -20, -7, 8, 19, 27, 7, 
-9, -14, -11, -8, -6, 7, 16, 29, 37, 37, 32, 23, 15, 7, 6, 12, 
22, 33, 42, 47, 47, 44, 27, 16, 8, -4, -7, -1, 1, 4, 11, 21, 
27, 22, 14, 9, 6, 7, 14, 29, 29, 26, 30, 39, 37, 27, 16, 5, 
-4, -10, -16, -12, -1, 14, 21, 14, -5, -8, -4, 0, 1, -6, -6, -6, 
-13, -20, -11, 21, 35, 40, 42, 43, 42, 31, 23, 19, 13, 7, 9, 13, 
16, 18, 17, 10, -8, -10, -8, -7, -14, -23, -27, -26, -23, -23, -32, -51, 
-58, -58, -59, -58, -51, -43, -44, -46, -41, -30, -24, -32, -42, -40, -30, -21, 
-9, 3, 18, 29, 35, 31, -2, -22, -29, -23, -11, 3, 10, 20, 34, 45, 
50, 47, 43, 39, 33, 33, 37, 44, 46, 48, 56, 67, 73, 67, 55, 47, 
49, 57, 61, 56, 49, 35, 14, 0, 6, 19, 20, 7, -12, -39, -46, -36, 
-15, 3, 0, -24, -37, -50, -62, -67, -59, -43, -34, -20, -9, -9, -33, -50, 
-53, -47, -37, -26, -18, -13, -1, 14, 21, 16, 9, 9, 12, 15, 14, 4, 
-5, -14, -25, -32, -27, 2, 16, 19, 17, 17, 17, 14, 8, -6, -14, -9, 
0, 3, 2, 3, 10, 22, 32, 19, 2, -8, -9, -8, -14, -16, -16, -14, 
-6, 3, 0, -4, -10, -15, -15, -7, -7, -8, -6, -1, -4, -20, -19, -6, 
10, 25, 44, 51, 54, 52, 45, 37, 29, 22, 9, -5, -11, -7, 12, 25, 
35, 38, 37, 40, 48, 53, 52, 49, 42, 37, 34, 30, 30, 36, 45, 49, 
54, 58, 55, 41, 16, 7, 2, -3, -9, -6, 1, 1, 0, 0, 3, 7, 
4, -2, -5, -8, -9, -7, -5, -4, -9, -12, -8, 5, 11, 11, 15, 27, 
33, 17, 3, 7, 17, 24, 30, 39, 51, 55, 53, 57, 69, 65, 54, 43, 
42, 30, 15, 8, 14, 25, 24, 16, 20, 21, 7, -4, 4, 9, -3, -20, 
-29, -34, -46, -48, -49, -45, -35, -25, -20, -33, -48, -54, -53, -51, -61, -66, 
-63, -50, -44, -50, -51, -53, -50, -45, -35, -29, -26, -10, 2, -6, -26, -39, 
-39, -38, -38, -42, -37, -27, -23, -28, -41, -55, -64, -58, -54, -56, -62, -63, 
-49, -38, -35, -35, -35, -48, -55, -59, -63, -65, -60, -29, -13, -7, -9, -15, 
-28, -56, -57, -48, -42, -38, -23, -19, -26, -40, -58, -73, -65, -49, -39, -29, 
-17, 9, 11, 4, 0, 1, 2, -4, 0, 10, 22, 28, 32, 52, 63, 67, 
59, 48, 37, 28, 26, 31, 39, 43, 45, 44, 37, 34, 44, 62, 74, 64, 
54, 56, 67, 80, 77, 59, 39, 31, 36, 56, 62, 56, 38, 16, 0, -7, 
-10, -16, -21, -17, -4, 8, 24, 31, 28, 21, 7, -8, -21, -22, -18, -16, 
-7, 11, 29, 28, 12, -9, -9, 2, 16, 33, 44, 36, 20, 9, 5, -2, 
-12, -22, -28, -29, -24, -19, -24, -33, -40, -44, -43, -36, -22, -15, -13, -14, 
-16, -17, -13, -10, -7, -2, 6, 10, -5, -24, -37, -38, -30, -24, -30, -39, 
-39, -30, -24, -19, -18, -19, -21, -21, -15, -18, -30, -44, -50, -46, -28, -23, 
-28, -38, -49, -54, -44, -31, -16, -10, -4, -1, -5, -8, -5, 2, 5, 10, 
23, 41, 54, 59, 57, 47, 35, 23, 10, -5, -19, -14, -5, 1, 2, 2, 
-1, -5, -5, 4, 15, 5, -18, -37, -41, -36, -30, -17, -5, 6, 13, 16, 
18, 10, 0, -4, 0, 6, 8, 6, 4, 3, 4, 9, 34, 51, 62, 70, 
78, 84, 79, 68, 55, 46, 40, 46, 62, 74, 75, 58, 35, 14, 8, 7, 
4, -6, -20, -21, -3, 11, 12, 4, -4, 0, 3, 0, -13, -29, -32, -22, 
-3, 17, 26, 29, 34, 34, 22, -3, -31, -59, -61, -49, -31, -16, -4, 21, 
38, 45, 42, 32, 21, 28, 51, 74, 80, 71, 50, 38, 33, 28, 25, 25, 
27, 28, 29, 25, 12, -5, -19, -21, -23, -23, -23, -31, -40, -54, -65, -67, 
-59, -46, -41, -44, -58, -77, -100, -123, -119, -108, -95, -83, -61, -44, -27, -9, 
6, 14, 20, 24, 28, 29, 19, -4, -10, -10, -12, -23, -40, -54, -45, -25, 
-10, -2, 5, 19, 20, 18, 18, 19, 31, 43, 51, 55, 57, 62, 75, 77, 
70, 63, 53, 38, 21, 22, 35, 49, 63, 77, 70, 51, 21, -8, -36, -59, 
-53, -46, -32, -23, -28, -21, -10, 3, 8, -1, 0, -1, -16, -17, -6, 4, 
7, 7, 18, 31, 33, 37, 45, 42, 38, 31, 24, -4, -25, -30, -18, -10, 
-11, -13, -16, -8, -11, -24, -28, -38, -27, -11, 2, 3, -18, -6, 24, 45, 
51, 54, 52, 42, 31, 17, 5, 2, 13, 15, 7, 5, 5, -14, -29, -47, 
-62, -63, -56, -41, -42, -50, -51, -44, -40, -49, -58, -62, -60, -54, -47, -40, 
-30, -24, -21, -14, -7, -21, -38, -42, -38, -32, -17, 2, 15, 11, 1, -19, 
-28, -29, -24, -15, -10, -15, -28, -39, -48, -54, -40, -28, -15, -7, 0, 6, 
13, 13, -5, -27, -41, -45, -39, -36, -41, -51, -50, -37, -38, -45, -50, -52, 
-55, -49, -39, -28, -22, -25, -36, -59, -74, -72, -56, -40, -19, -8, -5, -11, 
-14, -14, -11, 5, 18, 14, 2, -5, 9, 24, 35, 34, 32, 30, 21, 18, 
22, 29, 34, 35, 37, 37, 36, 35, 32, 20, 9, 12, 25, 37, 57, 71, 
79, 74, 55, 23, -22, -28, -23, -15, -9, -3, 3, 3, 2, 3, 8, 9, 
1, 2, 18, 38, 56, 67, 66, 54, 38, 30, 30, 23, 5, -6, 1, 18, 
38, 47, 47, 33, 8, -13, -11, 4, 21, 40, 51, 52, 36, 18, 8, 7, 
16, 37, 42, 42, 39, 30, 25, 37, 44, 46, 42, 32, 21, 11, 14, 22, 
30, 24, 5, 5, 8, 6, 3, 1, 1, 0, -1, -3, -8, -2, 7, 14, 
11, 1, -12, -37, -48, -53, -51, -36, -15, 2, 3, 3, 8, 12, 1, -9, 
-12, -4, 10, 21, 13, 2, -4, -6, -5, -3, 0, 0, -1, 0, 0, -7, 
-12, -10, -9, -11, -11, -16, -17, -11, 0, 3, -4, -14, -23, -28, -26, -22, 
-16, -15, -15, -14, -15, -13, -8, -14, -23, -35, -45, -38, 0, 25, 33, 25, 
12, -9, -15, -16, -15, -13, -9, 5, 18, 27, 25, 14, -2, -23, -33, -44, 
-52, -51, -26, 0, 18, 21, 14, 1, -20, -29, -30, -29, -33, -36, -18, 7, 
26, 26, 8, -23, -21, -3, 15, 21, 23, 28, 35, 42, 43, 40, 33, 12, 
0, -1, 8, 20, 35, 39, 40, 36, 29, 23, 12, 8, 9, 13, 17, 18, 
16, 22, 36, 50, 56, 45, 35, 31, 30, 32, 39, 60, 67, 58, 47, 45, 
51, 47, 36, 28, 24, 18, 13, 18, 23, 25, 21, 9, -2, 1, -2, -14, 
-22, -6, 12, 20, 15, 9, 5, -9, -8, -6, -6, -6, -16, -23, -19, -19, 
-29, -35, -15, 0, -7, -16, -9, 4, 11, 3, -4, -8, -18, -31, -51, -54, 
-42, -23, -7, -13, -27, -33, -32, -30, -37, -37, -29, -26, -32, -43, -43, -31, 
-16, 0, 6, 0, -11, -5, 4, 6, 7, 21, 27, 0, -33, -51, -42, -11, 
26, 23, 3, -15, -8, 39, 48, 32, 9, -1, 2, 12, 15, 9, 0, -11, 
-18, -15, -14, -20, -21, -9, 0, -6, -8, -1, 1, -5, -8, -2, 6, 16, 
28, 33, 8, -20, -41, -55, -60, -45, -30, -13, 4, 14, 11, -7, -14, -13, 
-10, -15, -23, -29, -36, -45, -51, -55, -53, -34, -19, -18, -23, -25, -8, 17, 
45, 55, 45, 25, 13, 7, 11, 14, 4, -14, -13, -3, 6, 10, 10, 5, 
-1, -5, -4, 6, 20, 19, 13, 7, 1, 4, 10, 9, 3, -4, -7, -11, 
-15, -19, -28, -33, -32, -18, -6, 11, 24, 24, 15, -2, -14, -27, -36, -42, 
-50, -60, -65, -61, -46, -29, -12, -1, 14, 25, 27, 23, 10, 7, 17, 23, 
21, 14, -3, -9, -1, 10, 13, 15, 13, 12, 11, 6, -2, -3, 7, 17, 
14, -6, -22, -25, -16, -1, 8, 11, -4, -18, -29, -37, -42, -43, -35, -27, 
-22, -20, -19, -18, -17, -23, -28, -27, -25, -13, -10, -11, -17, -21, -18, -16, 
-17, -8, 13, 33, 34, 12, 6, 12, 16, 11, 2, 3, 9, 17, 31, 42, 
46, 44, 39, 31, 27, 30, 31, 33, 36, 36, 32, 25, 26, 29, 27, 21, 
10, -8, -13, -7, 8, 25, 38, 39, 36, 33, 35, 43, 55, 61, 60, 53, 
44, 39, 39, 42, 41, 35, 30, 19, 13, 7, 0, -6, -7, -5, -2, 2, 
5, 8, 14, 24, 25, 27, 34, 37, 37, 39, 42, 43, 40, 34, 30, 32, 
36, 36, 32, 30, 30, 23, 11, -2, -13, -21, -17, -9, -5, -2, 4, 11, 
5, -3, -11, -19, -19, -15, -18, -19, -16, -11, -10, -22, -34, -34, -26, -17, 
-11, -7, -1, 0, -8, -21, -38, -45, -50, -52, -51, -42, -36, -29, -17, -9, 
-13, -34, -38, -39, -42, -46, -52, -54, -49, -41, -34, -33, -40, -42, -37, -31, 
-29, -28, -22, -19, -16, -15, -15, -17, -26, -34, -39, -38, -32, -26, -19, -13, 
-7, -4, -7, -9, -5, 4, 13, 19, 16, 11, 17, 24, 26, 28, 24, 21, 
21, 19, 18, 19, 17, 13, 8, 8, 11, 7, 3, 6, 13, 13, 14, 20, 
15, 7, 3, 7, 16, 23, 30, 36, 44, 45, 50, 47, 33, 27, 19, 17, 
20, 8, 6, 7, 6, -3, -32, -33, -34, -50, -54, -37, -23, -6, 5, 14, 
13, 6, 6, 1, -5, -4, -3, 3, -1, -9, -4, 13, 23, 14, 15, 18, 
19, 19, 14, 11, 5, 8, 19, 26, 5, -16, -18, -13, -25, -43, -25, -9, 
-12, -18, -19, -21, -19, -15, -12, -21, -32, -28, -20, -14, -13, -12, 2, 2, 
-6, -19, -30, -39, -48, -49, -47, -44, -36, -24, 1, 8, 7, 11, 7, -4, 
0, 3, -7, -26, -29, -12, -14, -21, -20, -7, -2, 10, 25, 34, 31, 18, 
7, 2, 4, 13, 23, 21, -2, -4, 0, 3, 0, -5, -8, -5, -1, -7, 
-20, -37, -44, -46, -40, -29, -23, -14, -6, -5, -9, -12, -10, -19, -32, -42, 
-39, -26, 1, 11, 15, 14, 11, 13, 20, 25, 29, 26, 15, 6, 4, 4, 
12, 24, 27, 5, -12, -25, -32, -30, -21, -7, 1, 4, 7, 5, 4, 8, 
10, 15, 18, 17, 8, -1, -11, -19, -18, -10, 0, 0, -6, -16, -26, -28, 
-23, -15, -9, -9, -4, 29, 57, 75, 76, 64, 48, 38, 45, 47, 39, 28, 
8, -1, -6, -5, -3, -10, -38, -44, -36, -27, -21, -18, -19, -28, -44, -59, 
-69, -81, -87, -90, -85, -71, -55, -32, -26, -28, -28, -18, -9, -6, -7, -6, 
-2, 2, 9, 8, 7, 10, 23, 43, 60, 59, 54, 51, 59, 78, 88, 82, 
80, 84, 94, 106, 108, 102, 88, 69, 48, 33, 32, 29, 17, -2, -18, -33, 
-36, -36, -35, -29, -15, -18, -38, -67, -91, -94, -63, -35, -14, -3, 0, -16, 
-40, -61, -68, -62, -53, -43, -35, -25, -8, 11, 26, 23, 10, 9, 22, 41, 
59, 67, 69, 63, 60, 66, 77, 80, 74, 62, 56, 53, 46, 36, 24, 16, 
15, 16, 15, 14, 12, 12, 18, 39, 50, 48, 33, 15, 4, -3, -10, -17, 
-20, -16, 2, 15, 19, 13, 3, -7, -15, -20, -31, -41, -42, -32, -9, -5, 
-11, -20, -22, -10, 4, 19, 25, 21, 15, 18, 34, 54, 67, 68, 62, 63, 
67, 74, 81, 77, 60, 47, 38, 33, 27, 18, 17, 22, 29, 36, 39, 40, 
33, 20, 6, -9, -19, -27, -32, -31, -20, -10, -7, -5, 5, 15, 17, 11, 
0, -13, -18, -20, -19, -16, -14, -17, -25, -41, -58, -68, -64, -60, -66, -71, 
-70, -61, -41, -38, -44, -52, -51, -41, -31, -19, 2, 30, 47, 41, 34, 31, 
23, 17, 12, 16, 19, 5, -10, -14, -13, -25, -39, -33, -15, -10, -19, -11, 
0, 3, -5, -27, -32, -40, -44, -39, -42, -51, -49, -43, -47, -59, -62, -46, 
-34, -32, -31, -26, -14, -12, -21, -21, -19, -21, -21, -20, -25, -34, -29, -16, 
-25, -40, -32, -12, -9, -31, -49, -51, -32, -9, -1, -32, -55, -62, -49, -32, 
-22, -29, -34, -25, -11, 0, 8, 10, 12, 18, 27, 29, 13, 0, -6, -13, 
-17, -11, 12, 18, 10, 3, -2, -15, -21, -19, -18, -24, -29, -6, 19, 42, 
58, 53, 31, -3, -13, -8, 5, 24, 50, 57, 46, 39, 54, 77, 101, 103, 
99, 80, 62, 58, 57, 55, 55, 54, 48, 37, 37, 44, 58, 66, 63, 58, 
62, 57, 43, 28, 17, 12, 12, 13, 14, 18, 31, 38, 41, 37, 33, 28, 
19, 15, 11, 7, 3, -10, -18, -22, -29, -37, -38, -29, -26, -29, -35, -38, 
-44, -52, -47, -32, -18, -16, -46, -73, -90, -96, -90, -81, -73, -69, -71, -77, 
-76, -63, -43, -41, -41, -44, -44, -37, -42, -53, -59, -54, -45, -34, -28, -24, 
-21, -17, -17, -24, -34, -45, -50, -53, -58, -64, -70, -70, -64, -54, -33, -20, 
-14, -13, -20, -26, -20, -5, 10, 5, 0, };
