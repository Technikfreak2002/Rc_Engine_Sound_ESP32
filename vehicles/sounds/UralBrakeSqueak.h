const unsigned int brakeSampleRate = 22050;
const unsigned int brakeSampleCount = 7820;
const signed char brakeSamples[] = {
0, -1, -1, -1, 0, -1, 0, 0, 0, 0, 0, -1, -1, 0, -1, -1, 
0, -1, -1, -1, -1, -1, -2, -1, 0, 0, 1, 2, 1, 2, 1, -3, 
-4, -2, 0, -1, -6, -6, 3, 6, 1, -2, -1, -2, -6, -4, 4, 2, 
-3, -2, 6, 4, 5, 0, -6, -6, -8, -4, 0, 3, 2, 2, 2, 1, 
-3, -4, -3, 2, -4, -7, 3, 6, 6, 3, -8, -3, -2, 2, 6, 2, 
1, 1, -2, 0, 0, -9, -11, -10, 0, 7, 4, -2, 6, 10, 2, -4, 
-4, 1, -6, -3, -2, -7, -2, 4, 4, -1, 2, 3, 2, 4, 5, -3, 
-14, -6, -2, -9, -6, 8, 13, -1, 1, 3, 3, 1, -5, -3, 2, -6, 
-1, 3, -1, -4, -8, -1, 4, 3, -4, 0, 5, -4, -12, -8, -2, -4, 
-7, 0, 8, 8, 13, 17, 14, 10, 1, -7, -17, -23, -13, -7, 1, 0, 
-4, -5, 1, 18, -3, -10, 1, -1, 1, 8, 2, -4, -10, -8, 5, -1, 
-1, 6, 1, -5, 1, 15, -3, -8, -2, 1, -7, -5, 2, -6, -5, 1, 
5, 15, -1, -7, -3, -5, -6, -9, 5, 4, -7, 4, 7, 1, -7, -9, 
-7, -9, 1, 3, -8, -6, 14, 26, 9, -10, 0, 6, 3, -9, -11, -7, 
-10, -12, -5, 3, -6, 0, 8, 7, -11, 3, 1, -5, -4, -6, 0, 5, 
12, 12, 7, -9, -11, 8, 18, 12, 2, -21, -7, -2, -10, -11, -1, 0, 
-4, 0, 7, 22, 6, -5, -13, -4, 2, -2, 4, 3, -4, -8, 15, 1, 
-13, 0, 0, 0, 1, 14, 6, -4, -2, 3, -4, -12, -14, 4, 8, -12, 
-10, 10, 6, -3, 11, 18, -9, -7, 5, -3, -15, -18, -14, 16, 17, 5, 
16, 20, -15, -33, -10, 16, 5, -8, -4, 1, 17, -2, -17, 0, -7, 2, 
4, 20, -4, 1, 35, 10, -19, -36, 14, 1, -12, -8, -6, 13, -5, 13, 
16, 0, 0, -13, -4, -6, 2, 5, -14, -15, -1, 20, 8, 15, 15, -7, 
20, -2, -24, -32, -10, 24, 14, -5, -25, 6, 28, 7, -27, -30, 8, 5, 
-10, -3, -5, 10, 8, 1, 0, -11, -7, -13, -1, -3, -9, 7, 14, 20, 
7, 15, 18, -10, -16, -7, 10, -18, -27, -25, -17, 27, 12, -18, 0, 28, 
22, 16, -52, -42, 13, 13, -24, -36, 53, 20, -15, -3, 14, 7, -19, -4, 
-11, -7, 26, -4, -17, -19, 12, 29, -31, -18, 22, 17, -2, 3, 21, -39, 
-32, 10, 27, 23, -22, -15, 6, 12, -13, -4, 3, 7, -9, -3, 27, 3, 
-16, -33, -3, 21, 2, -13, 33, 34, -23, -43, 18, 20, -8, -4, -3, -1, 
0, -7, 11, 2, -14, -13, 8, 21, -12, 1, 19, -14, -24, -14, 32, 14, 
-11, -9, 8, 29, -21, -15, 5, -7, 4, -9, 20, 15, 2, -20, -37, 18, 
17, -23, 7, 22, 35, 11, -19, -16, -1, 3, -22, -31, -3, 8, -2, 36, 
28, -11, -10, 11, 21, -16, -32, -48, -8, 36, -40, -7, -6, 14, 29, -31, 
0, 13, 15, -7, -16, 40, -1, -46, -38, 6, 37, -8, -16, 6, 19, -19, 
15, 18, -25, -29, -4, 23, -11, -49, -17, 47, 50, -42, -31, 48, 28, -51, 
-3, 27, 18, 6, -19, -9, 3, 21, -15, -33, 25, 6, 19, -12, -24, 19, 
10, -7, -15, -2, 14, 7, -21, -15, 4, 35, 37, -34, 0, 8, 15, 24, 
-14, -8, -24, -1, 19, -2, -20, -6, 48, -17, -49, 11, 44, -27, -38, -19, 
4, 30, -4, -33, -19, 49, 75, -12, -35, -9, 19, -18, -31, 3, 23, 0, 
16, 58, -32, -50, 41, -10, -46, -21, 25, 13, -3, -12, -10, 9, 9, -18, 
-12, 44, 33, -30, -44, 4, 11, 14, 3, -7, 12, 15, 0, -16, -17, -16, 
-4, -28, 29, 61, 16, -32, 3, 22, -40, -27, 16, 24, -36, -15, 27, 17, 
17, 15, -22, -26, -6, 7, -8, -35, 23, 2, 3, 23, -10, 21, 6, 2, 
-6, 7, 12, -56, -33, 20, 31, -6, -11, 61, 20, -46, -22, 13, 17, -8, 
-26, -19, 3, 15, -3, -24, -18, 37, 16, -25, -11, 13, 42, -4, -35, 20, 
33, -6, -14, -30, -8, 63, 38, -37, -53, 8, 50, -32, -33, 14, 2, 2, 
-33, 19, 9, -27, -8, 13, 13, -45, 20, 50, 11, -17, -48, -3, 35, 29, 
-65, -43, 63, 47, -40, -26, 23, -1, -21, -8, 2, 29, 19, -41, -25, 12, 
8, -16, -23, 11, 4, -26, 20, 24, -13, 6, 9, -57, -35, 26, 0, -18, 
-10, 31, 23, 10, -48, -20, 48, 27, -39, -28, -5, -14, 7, 22, -6, 21, 
33, -14, -28, 15, 11, -19, -35, 17, 10, -16, -12, -6, 55, 42, -29, -50, 
27, 48, -35, -44, 45, 12, -41, -19, 49, 33, -20, 6, 25, 9, -55, -50, 
20, -3, 8, 8, 2, 32, 1, -37, -30, 46, 16, -48, 4, 31, 22, -32, 
-11, 49, -18, -65, 6, 67, -34, -55, 26, 28, -40, -23, 32, 36, 2, -26, 
-34, -22, 12, -41, -38, 70, 55, -54, 28, 86, 27, -45, -41, -12, -20, -1, 
21, 28, -11, -23, 19, -2, 9, 8, -31, 35, 34, -26, -98, -22, 91, -57, 
-93, -9, 79, 4, -15, 61, -27, -57, 33, 0, -22, -45, 9, 37, -18, -9, 
17, 17, 14, 33, -1, -27, -24, -12, -10, -8, -45, 8, 32, -36, 7, 66, 
15, -37, -8, 41, -9, -22, -29, 19, 52, -51, -71, 41, 37, -13, -43, 47, 
74, -4, -36, -52, -17, -25, 0, 30, -8, -39, 13, 90, 24, -21, 20, -8, 
-67, -30, -22, -55, -3, 12, -24, 72, 91, -7, -46, 36, 35, -35, -46, -29, 
-2, -9, -9, -31, 24, 51, -5, -6, 36, 49, 15, -27, -15, -49, -35, -17, 
19, 37, -11, -18, 22, 68, 39, -18, -39, -2, 20, 7, -18, -35, -10, 2, 
8, -4, -20, 2, 36, 21, -45, -19, 25, 34, -23, -51, 31, 18, -60, -58, 
-3, 44, 27, 24, 49, -25, -38, 7, 66, 30, -76, -52, 17, 35, 18, -37, 
-51, 59, 97, 60, -32, -49, -35, 12, -7, -58, -21, -7, 6, -13, 67, 102, 
-18, -40, 72, 38, -95, -98, 7, 23, -44, -78, 50, 101, -10, -41, 86, 71, 
-56, -38, -2, -25, -33, -6, 19, -8, 6, 36, 45, 18, 2, -1, 16, -9, 
-63, -30, 16, -21, -35, 1, 14, 12, 5, 65, 76, 32, -34, -74, -33, 26, 
21, -35, -62, 6, 22, -71, 50, 112, 4, -54, 43, 3, -43, 5, -19, -28, 
37, -24, -53, -4, 42, 51, 1, -6, 4, 6, 22, -73, -42, 37, 7, -40, 
5, -20, -57, 74, 114, -16, -45, 17, -4, -43, -1, 44, -61, -36, -1, -1, 
47, 55, -38, 16, 43, -18, -96, -9, 72, -69, -56, 25, 13, -34, 26, 36, 
18, 13, 2, -2, -20, -9, 30, -2, 7, 2, -71, -50, 11, 33, 15, 14, 
21, 20, 37, 24, -75, -21, 53, -6, -89, -36, 22, 39, 42, 55, 7, 37, 
-7, -56, 40, 25, -32, -80, -23, 12, -36, 24, 64, 44, 4, -28, -20, 23, 
-22, -34, 0, 16, -31, -90, 17, 31, 40, 37, 65, 6, -55, -37, -12, 1, 
-34, 17, -10, -50, -13, 22, 45, 44, -15, -29, 0, 30, -22, -9, 26, -18, 
-30, -20, -40, -42, 37, 51, 28, 38, -20, 5, -20, -7, 23, -32, -58, -46, 
5, 27, 18, 43, 63, -6, -63, 17, 46, -3, -14, -65, 0, 3, -27, -10, 
-24, 56, 45, 4, 0, 7, 36, -26, -40, 6, -10, -50, -40, 7, 4, 34, 
53, 45, 3, -50, -32, 54, 44, -32, -82, -57, -8, 8, -22, 3, 55, 46, 
4, -8, 7, 7, 19, 37, -66, -61, -13, 21, -11, -4, 17, 15, 26, -6, 
-30, 41, 55, 9, 2, -32, -72, -13, -7, -31, -15, 56, 48, -7, 26, 31, 
24, 12, -85, -2, -36, -84, -44, 18, 127, 28, -52, -41, 0, 56, 8, -42, 
12, 22, -76, -45, 55, 51, 11, -19, 28, 26, -66, -59, 30, 91, -62, -65, 
-23, 29, 12, -17, 19, 25, 29, -49, -39, -3, 39, 42, 7, -18, -23, -18, 
-11, 16, -35, -30, 32, 30, 36, 8, -57, -15, 33, -24, -53, -30, 49, 46, 
-37, 12, 78, -7, -44, -38, 15, 38, -20, 5, -29, -11, 20, -1, 12, 5, 
38, -48, -58, -12, 39, 41, -8, -31, 14, 45, -17, -66, -31, 73, 41, 30, 
-31, -91, 1, 21, 14, -17, 34, 30, -62, 12, 49, 49, 8, -23, 20, -46, 
-40, -23, -14, 26, -13, -9, -7, 5, 2, 40, 64, 18, -54, -35, -50, -40, 
17, 37, 63, 14, -38, -21, -2, 4, 16, 30, 4, -13, -17, -25, 1, 21, 
-8, -23, -32, -23, -8, 47, 61, 27, -14, -23, -15, -28, -55, 0, 36, 17, 
-39, -43, 43, 45, 16, 37, 31, -37, -83, -59, 8, 37, -46, -3, 19, 3, 
10, 9, 71, 55, -6, -26, -3, -32, -96, -76, -15, 72, 66, -5, -24, 9, 
69, 33, -3, -28, -30, -43, -55, -10, -14, -31, 35, 53, 33, 16, -2, 42, 
29, -1, -21, -17, -69, -60, -24, -14, 31, 34, -8, -7, 42, 38, 32, 26, 
19, -44, -91, -66, -44, 16, 22, 5, 18, 71, 46, -9, 0, 35, 21, -48, 
-81, -46, -56, -41, 63, 47, -2, -4, 13, 34, 40, -4, 22, 19, -43, -101, 
-82, 42, 5, -7, -14, 26, 30, 9, 33, 15, 40, 39, -84, -50, -41, -86, 
-34, 20, 32, 58, 49, 18, 26, 59, 14, -23, -54, -39, -45, -68, 9, -4, 
-3, 21, 45, 49, 19, 40, 46, 22, -46, -54, -57, -65, -40, -4, 23, 35, 
33, 9, 3, 53, 43, 5, 9, -22, -68, -23, -2, -39, -48, -12, 18, 42, 
3, 41, 70, 13, 12, -5, -38, -46, -42, -42, -13, 9, -3, 19, 22, 13, 
50, 53, 47, -1, -29, -54, -62, -42, -35, -11, 2, 17, 33, 46, 66, 64, 
34, 3, -36, -87, -80, -64, -60, 20, 71, 45, 26, 32, 72, 32, -12, -18, 
-9, -21, -66, -64, -69, -4, 37, 22, 51, 62, 46, 5, 1, 27, 1, -30, 
-73, -84, -65, -6, 1, 23, 66, 52, 54, 13, 9, 2, -19, 1, -37, -32, 
-49, -53, -29, -22, 18, 40, 91, 48, 6, 5, -13, 25, -7, -48, -64, -27, 
-43, -17, 55, 35, 20, 35, 40, 11, 2, 9, -18, -28, -52, -57, -22, -1, 
-19, -13, 51, 92, 36, 37, 37, -2, -11, -28, -61, -90, -48, -5, 11, 33, 
53, 24, 19, 25, 9, 24, 7, 5, -10, -67, -71, -59, -23, 0, 21, 60, 
38, 10, 56, 67, 44, -2, -30, -79, -85, -22, -27, -68, -8, 64, 60, 36, 
38, 35, 28, 8, -61, -39, -11, -50, -55, -18, 11, 39, 22, 19, 38, 16, 
26, 25, -19, -26, -6, -42, -43, -47, -41, -10, 16, 59, 62, 32, 32, 25, 
18, 9, -36, -91, -75, -19, -48, -14, 39, 58, 43, -14, 6, 40, 6, 8, 
19, -13, -51, -60, -59, -43, 14, 21, 46, 52, 13, -13, 17, 65, 38, -24, 
-28, -45, -62, -72, -25, 22, 41, 49, -6, -7, 0, 42, 52, -4, -20, -30, 
-25, -66, -72, -14, 30, 27, 23, 60, 33, 6, 12, 30, 6, -21, -48, -48, 
-45, -53, -31, 50, 68, 28, -23, 12, 33, 5, 19, -25, -27, -19, -46, -30, 
-27, -1, 25, 37, 6, 3, 50, 43, 2, -4, -18, -1, -30, -66, -59, -14, 
31, 7, 4, 52, 74, 23, -9, 0, 13, 2, -52, -66, -67, -43, 6, 45, 
3, 21, 49, 32, 33, 27, -1, -35, -3, -16, -86, -40, 1, 5, -22, 15, 
55, 49, 37, 21, 15, 8, 8, -43, -78, -56, 5, -1, -53, -10, 49, 45, 
43, 71, 1, -11, 17, 6, -39, -52, -54, -59, -45, -7, 35, 57, 36, 26, 
59, 55, 22, -38, -41, -17, -50, -76, -52, -25, -19, 27, 73, 92, 41, 1, 
13, 3, -8, -33, -43, -30, -71, -74, -29, 22, 66, 59, 67, 66, 14, -10, 
-6, -15, -42, -48, -29, -61, -61, -29, 20, 56, 62, 73, 81, 18, -12, 14, 
-24, -62, -92, -67, -54, -55, -4, 34, 67, 68, 74, 65, 32, 9, 3, -28, 
-64, -65, -96, -106, -56, 0, 33, 108, 96, 73, 63, 35, -28, -27, -6, -56, 
-104, -112, -66, 1, 48, 56, 60, 89, 61, 21, 37, 46, -25, -82, -69, -58, 
-72, -85, -27, 48, 58, 70, 89, 89, 48, -16, -32, -25, -35, -76, -92, -56, 
-23, -6, 26, 70, 95, 63, 49, 50, 12, -19, -65, -69, -75, -77, -35, -15, 
-22, 16, 89, 102, 80, 58, 5, -29, -46, -42, -58, -72, -57, -49, -7, 24, 
39, 70, 92, 75, 33, 14, -19, -41, -45, -59, -49, -47, -64, -15, 24, 48, 
68, 76, 58, 41, 16, -19, -30, -60, -61, -56, -54, -43, -34, 29, 60, 77, 
85, 89, 45, -13, -42, -59, -73, -77, -62, -21, -13, -1, 32, 47, 69, 83, 
72, 7, -14, -35, -66, -60, -55, -20, -28, -17, 21, 32, 42, 49, 71, 52, 
20, -6, -54, -102, -44, -20, -14, -2, -2, -4, 19, 58, 78, 59, 31, -11, 
-20, -31, -72, -63, -30, -20, -24, -7, 23, 35, 55, 58, 64, 24, -11, -6, 
-54, -84, -64, -29, -33, -28, 4, 52, 67, 55, 79, 54, 2, -3, -24, -63, 
-85, -56, -34, -21, 17, 29, -9, 80, 92, 61, 23, 4, -2, -41, -51, -72, 
-67, -50, -1, 26, 29, 20, 37, 49, 55, 62, 21, -3, -10, -62, -66, -38, 
-58, -62, -47, 44, 60, 56, 75, 83, 80, 21, -13, -58, -83, -86, -75, -42, 
-27, -9, 17, 49, 58, 79, 70, 51, 24, -11, -25, -59, -82, -82, -64, -53, 
-17, 21, 58, 95, 88, 66, 54, 25, -6, -30, -54, -91, -84, -75, -59, -18, 
33, 52, 62, 101, 104, 55, 23, -9, -31, -58, -79, -88, -84, -51, -20, 9, 
38, 97, 102, 81, 63, 46, 7, -38, -64, -87, -71, -86, -95, -20, 27, 45, 
66, 83, 90, 104, 64, 15, -32, -68, -92, -84, -81, -87, -51, -4, 48, 95, 
110, 92, 79, 20, -10, -12, -32, -75, -113, -102, -49, -16, 13, 38, 56, 91, 
94, 97, 59, 8, -36, -53, -74, -91, -87, -85, -41, 6, 33, 56, 84, 95, 
87, 55, 22, 0, -29, -93, -87, -84, -99, -56, -11, 39, 52, 79, 109, 89, 
72, 4, -29, -36, -54, -72, -72, -65, -63, -30, 14, 42, 68, 70, 81, 74, 
41, 15, -30, -59, -81, -77, -65, -62, -24, 21, 33, 52, 84, 63, 59, 42, 
15, -11, -36, -65, -81, -77, -58, -34, -1, 53, 61, 39, 66, 84, 42, 15, 
-9, -44, -59, -75, -86, -38, -17, -21, 20, 49, 52, 43, 31, 42, 34, -5, 
-29, -40, -38, -40, -37, -20, -5, 5, 29, 37, 26, 22, 24, 13, -13, -6, 
-14, -32, -24, -2, -1, -16, -17, -15, -4, 8, 4, 23, 36, 31, 40, 21, 
-8, -40, -60, -43, -7, 9, 10, 18, 17, 10, -3, 0, -3, -1, -1, -6, 
0, 2, 0, 16, 30, 25, -15, -50, -27, -12, -13, -11, 15, 12, 26, 36, 
33, 21, -9, -5, -10, -25, -38, -32, -23, -22, 10, 20, 22, 34, 23, 20, 
3, 0, 3, -6, -10, -16, -35, -38, -10, 7, -1, -8, -14, 1, 31, 28, 
23, 41, 40, 4, -24, -42, -49, -49, -47, -34, 12, 21, 30, 65, 74, 61, 
19, -10, -20, -54, -78, -71, -43, -15, 14, 37, 34, 47, 41, 35, 29, 5, 
-14, -31, -41, -48, -26, -5, -14, -5, 15, 19, 18, 20, 12, 14, 24, 18, 
0, -10, -23, -31, -36, -19, 6, -18, -23, 4, 24, 38, 36, 36, 15, -7, 
1, -15, -36, -39, -30, -20, -17, -5, 13, 32, 38, 36, 37, 20, -11, -19, 
-25, -20, -13, -12, -23, -13, 4, -3, -12, 24, 34, 35, 30, 9, -12, -14, 
-11, -9, -13, -20, -8, -19, -28, -25, -8, 24, 40, 35, 34, 33, 7, -21, 
-15, -22, -48, -45, -20, -6, 19, 16, 24, 22, 5, 17, 2, -21, -24, -4, 
17, 19, 13, -14, -19, -11, -18, -7, -12, -11, -4, 7, 27, 23, 23, 31, 
24, -5, -37, -48, -37, -28, -26, -2, 37, 27, 15, 11, 5, 32, 30, 7, 
-30, -58, -47, -18, 1, 14, 24, 19, -5, 8, 18, 11, -4, -12, 16, -1, 
-11, -11, -9, 9, 3, -6, -22, -33, -14, -3, 13, 32, 37, 34, 9, -11, 
8, 5, -32, -33, -13, -38, -19, -13, -1, 32, 42, 36, 27, 26, 8, -25, 
-49, -34, -17, -2, 15, 7, -5, 4, 9, 5, -3, 2, 15, 10, 7, 20, 
15, 5, -11, -27, -34, -49, -41, -5, 18, 43, 47, 45, 26, 16, -17, -39, 
-31, -33, -31, -25, -8, 3, 12, 32, 26, 32, 33, 22, 7, -18, -24, -43, 
-48, -30, -15, 9, 14, 7, 15, 33, 30, 19, -11, -27, -4, -2, -13, -18, 
-11, -2, 2, 2, -10, -4, -7, 4, 33, 32, 22, 18, -3, -11, -13, -36, 
-47, -37, -31, -7, 24, 43, 45, 32, 32, 18, 5, -21, -50, -53, -48, -42, 
3, 24, 50, 55, 33, 33, 10, -24, -44, -39, -31, -22, 2, 12, 18, 21, 
10, -2, 8, 5, -14, -24, -6, 15, 21, 21, 21, -1, -40, -38, -33, -24, 
-8, 10, 37, 37, 26, 34, 29, -1, -25, -16, -38, -53, -29, -6, 8, 16, 
35, 46, 29, 6, 4, -4, -14, -29, -26, -11, -11, 1, 12, 11, 13, 4, 
-11, -7, -9, 0, 2, -1, 14, 28, 22, 4, -23, -38, -35, -34, -22, 14, 
23, 46, 55, 37, 25, -17, -36, -40, -38, -45, -45, -6, 17, 37, 43, 45, 
34, 13, -3, -16, -25, -34, -52, -41, -3, 19, 30, 40, 25, 14, -1, 0, 
-12, -37, -24, -20, -10, 16, 26, 10, 12, 21, 4, -13, -13, -24, -14, -2, 
11, 12, 17, 15, 12, -5, -15, -5, -18, -34, -20, 11, 24, 20, 10, 12, 
-8, -16, -4, -6, -20, -22, -5, 5, 14, 8, 20, 27, 9, 4, 5, -31, 
-39, -23, -11, -9, 8, 17, 18, 24, 22, 14, -7, -15, -32, -31, -3, 0, 
8, 14, 22, 14, -11, -28, -7, 7, -6, -9, 10, 33, 19, 1, -18, -13, 
-12, -16, -8, -10, -7, 5, 18, 12, 5, 10, 14, -9, -23, -10, -14, -17, 
1, 20, 12, 8, 17, 13, -7, -18, -7, -5, -16, -10, 5, 10, -5, 2, 
18, 11, 3, -15, -17, -16, -14, 0, 5, 23, 28, 13, -10, -16, 15, 2, 
-25, -28, -21, -18, 6, 19, 20, 8, 4, 15, -3, -1, 14, 14, -11, -30, 
-12, -8, -3, 4, 4, 11, 10, 17, 23, 9, -14, -30, -27, -25, -28, -16, 
17, 34, 34, 17, 6, 11, 2, -6, -5, -12, -31, -31, -16, 11, 22, 14, 
7, 10, 29, 42, 16, -22, -25, -36, -44, -30, -15, 4, 35, 30, 32, 39, 
39, 9, -37, -37, -29, -35, -48, 2, 21, 21, 27, 44, 34, 5, 7, 7, 
-2, -42, -44, -28, -27, 1, 23, 25, 27, 27, 26, 6, -14, -7, -1, -15, 
-25, -24, -20, -12, 11, 25, 20, 20, 16, 6, -11, -18, -12, -16, -7, 2, 
-4, 6, 22, 20, -21, -33, -18, -10, -6, 18, 40, 23, 6, -17, -41, -23, 
-2, -3, 0, 4, 13, 8, 12, 16, 4, -15, -13, -17, -29, -22, -4, 14, 
25, 11, 2, 11, 22, 23, -1, -19, -40, -58, -52, -19, 44, 54, 36, 13, 
5, 9, -9, -34, -17, 6, -15, -20, -19, 1, 45, 41, 8, -26, -5, 16, 
2, 4, 5, -11, -27, -24, -4, -6, 22, 28, 2, -6, -4, 5, 5, -7, 
5, -5, -31, -29, 16, 27, 18, 3, -18, -26, 2, 29, 34, 18, 8, 10, 
-12, -33, -51, -46, -14, 3, -1, 0, 20, 47, 41, 42, 24, -13, -35, -50, 
-47, -34, -8, 19, 27, 14, 20, 32, 27, -10, -29, -15, -19, -23, -20, 7, 
33, 18, 13, 1, -7, 0, -5, 8, -4, -22, -25, -18, 11, 16, 9, 1, 
8, 10, -8, -19, -4, 12, 8, -16, -6, 2, 8, 22, 5, -26, -21, 10, 
15, 3, 7, 7, -5, -15, -8, -7, -15, -2, 8, -3, 7, 12, 3, 17, 
19, 9, 1, 2, -17, -32, -35, -26, 1, 11, 4, 15, 20, 26, 22, -8, 
3, -6, -38, -32, -12, -28, -7, 26, 32, 23, 18, 16, 4, -9, -5, -8, 
-29, -31, -16, -2, 13, 18, -6, -12, -6, 21, 29, 26, 33, 4, -32, -33, 
-35, -47, -8, 20, 7, 6, 32, 21, 11, 8, 3, 4, -15, -26, -33, -23, 
4, 6, 1, 11, 10, 24, 13, -8, 14, 16, -1, -24, -33, -9, 7, -1, 
3, 8, 3, -10, 1, 15, 7, 2, 11, 0, -26, -22, -2, 10, 0, -8, 
-10, 20, 23, -11, 18, 1, -10, -7, -13, -21, -5, 18, 25, 8, -21, 11, 
19, -1, -11, -1, -2, -31, -17, 2, 6, 12, 7, 6, 19, 18, 5, -11, 
8, 15, -5, -25, -32, -23, -28, -5, 30, 32, 27, 25, 25, -8, -31, -10, 
-18, -43, 0, 3, 10, 45, 27, 0, -17, -5, 17, -6, -10, 12, 30, -11, 
-72, -53, -1, 24, 50, 34, 7, 15, 29, -8, -24, -24, -36, -21, -21, -12, 
21, 58, 51, -1, -4, -33, -39, -8, 7, 0, 0, -4, -11, -23, -14, 34, 
47, 31, 10, 6, -5, -22, -23, -24, -21, -11, -3, -10, 12, 54, 43, -9, 
-27, -34, -6, 6, 1, 21, 11, -13, -39, -41, -14, 20, 25, 18, 16, 26, 
3, -11, -16, -21, -14, -24, -22, -6, 17, 52, 42, 3, -20, -23, -5, 0, 
3, 12, 4, -17, -32, -31, -22, 35, 31, 15, 9, -7, 32, 3, -25, -27, 
-19, -10, -35, -7, 13, 29, 43, 30, 1, -18, -8, -12, -14, 7, -7, -5, 
-22, -32, -1, 22, 0, -15, 10, 23, 16, 30, 18, -22, -31, -24, -41, -21, 
0, 13, 30, 30, 23, 9, -4, 2, -10, -11, -30, -17, -14, -30, -8, 30, 
24, 14, 22, 12, 18, 28, -10, -36, -38, -47, -54, -28, 22, 45, 51, 62, 
15, 0, -16, -11, -35, -54, -15, -13, -6, 3, 20, 27, 23, 33, 21, 2, 
3, -14, -20, -40, -37, -31, -32, 29, 34, 31, 38, 43, 24, -30, -25, -12, 
-39, -50, -3, 9, 7, 23, 32, 8, 14, 15, 2, -7, -7, -26, -23, -12, 
7, 14, 2, 3, 11, 23, 0, -2, 4, -6, -2, -5, -19, -19, 8, 2, 
-6, 16, 13, -10, 10, 3, 2, -11, -4, -11, -10, 7, 6, 22, 19, -16, 
-25, -17, 2, 15, 15, 3, -1, 19, -3, -27, -22, -3, 4, 0, 11, 10, 
14, 8, 4, -3, -16, -21, -14, -5, 10, 20, 4, -8, -9, -3, -6, 9, 
36, 11, -21, -22, -18, -11, -5, 4, -1, -10, 22, 22, 2, 7, 18, -2, 
-27, -10, -15, -24, 7, 18, 5, -8, -2, 2, 0, 27, 14, -5, -9, -13, 
-12, -20, 3, 19, -7, -26, -15, 11, 11, 26, 30, -9, -8, 3, -18, -31, 
0, 11, -16, 5, 20, -6, -1, 18, 15, -4, -13, -14, -8, 1, 1, -12, 
-15, -4, 1, 6, 16, 45, 38, -9, -32, -30, -34, -21, 2, 10, 4, 28, 
35, 16, 11, -5, -21, -33, 3, -9, -23, -2, 1, 7, -1, 7, 15, 11, 
30, 2, -15, -24, -29, -35, -38, 15, 23, 27, 40, 26, 9, -10, -10, -20, 
-32, -15, -12, 8, 19, 10, 3, -8, 24, 19, -6, -3, 4, 2, -30, -26, 
-25, -21, 11, 37, 18, 8, 16, -6, -20, -3, -10, -18, 0, 12, -5, 3, 
5, 6, 5, -5, -4, -2, 20, 23, -9, -26, -26, 11, 7, -16, 10, 25, 
-2, 3, 20, -11, -27, 16, -4, -20, -3, -3, -14, 4, 11, 3, 3, 26, 
8, -10, -2, 12, 14, -22, -25, -3, 6, 13, 15, 11, -11, -1, 19, 7, 
-6, -6, 0, -18, -16, -20, -11, 6, 8, 24, 15, 2, -7, 9, -8, -1, 
0, -22, -15, -8, -4, 3, 10, 17, 1, 15, 15, 3, 14, -5, -21, -40, 
-33, 1, 22, 23, 11, 19, -15, -14, 2, 4, -7, -6, 18, 5, -26, 0, 
2, -12, -1, 0, 6, 32, 29, 8, 1, -16, -16, -23, -31, -1, 17, 5, 
19, 18, 13, -16, -21, 12, -29, 6, 16, 2, 10, -24, -41, -23, 10, 24, 
25, 5, 12, -3, 14, 7, -20, -13, -39, -12, 28, 16, 2, 21, -1, -31, 
8, 28, 11, 11, -21, -31, -38, -5, 18, 7, 8, 11, 19, 31, -6, -29, 
-13, -2, 0, -30, -15, 9, 7, 12, -1, 7, 11, -2, -8, 6, -1, -19, 
-4, -10, -22, 9, 9, 6, 6, 5, 13, -11, -3, -1, -13, -25, -2, 10, 
0, -8, -8, 20, 10, -8, 0, 21, 7, -34, -16, 11, 24, 1, -6, 2, 
9, 1, -24, -9, -2, 11, -3, -12, 34, 21, -5, -16, -18, -17, -25, -4, 
15, 3, 2, 22, 17, -16, -15, -11, 6, 9, -11, -12, -18, 5, 38, 22, 
-12, 6, 35, 11, -40, -38, -17, -12, 0, -2, 17, 12, 13, 2, 12, 19, 
-19, -12, -10, 0, -2, -20, 8, 0, -13, 13, 35, 30, 3, -15, -28, -3, 
22, 7, -22, -15, -9, 16, 25, 13, 9, -7, -7, -24, -6, 6, 14, -7, 
-40, -13, 6, 13, 8, 4, 3, -3, 9, 18, -16, -4, 16, -6, -18, -7, 
5, -14, -19, 24, 20, -11, 0, -2, 23, 9, -14, -29, -28, 3, 18, 18, 
5, 14, 9, -6, -3, 1, -7, -38, -5, 26, 28, 18, -21, 6, -18, -30, 
7, 13, -13, -13, 29, 20, 0, 11, -1, -8, -21, -29, -21, 40, 32, -2, 
-9, 10, -4, -33, 1, -1, 11, 8, -9, 7, -20, 4, 29, 7, -22, -7, 
18, 19, 11, -9, -7, -13, -30, -19, 5, 30, 5, -29, -8, 26, 9, 22, 
-5, -23, -11, -21, -6, -3, 11, 9, 3, 1, -6, 22, 4, -8, 11, -1, 
-22, 9, 7, -11, -13, -14, 3, 17, 19, 1, 19, 13, -18, -17, -37, -28, 
12, 20, -1, -2, 17, 1, -17, 10, -13, -28, 8, 31, -12, -18, -18, -8, 
19, 12, -13, 24, 32, -10, -23, -12, 2, -21, -39, -12, 29, 23, 13, 38, 
1, -43, -22, -13, -17, 5, 39, 32, 1, 5, -6, -24, -33, -21, -3, 4, 
7, 8, 36, 23, -19, -6, -13, 6, 17, -17, -15, 6, 14, -3, 4, 3, 
-33, -11, 38, 30, -17, -12, 5, -14, -20, 8, 9, 16, 2, -7, -6, -7, 
15, -11, -24, -1, 27, 22, -23, -30, 0, 29, 13, -17, -16, 12, 29, 7, 
-10, -16, 0, 5, 2, 1, -2, -2, -20, 14, 6, -23, 2, -7, 15, 19, 
-9, 2, 0, -4, -6, -12, 13, 4, -2, 5, -13, -18, -17, -2, 11, 32, 
14, -14, 1, -16, -25, 7, 23, 2, -17, 27, 5, -27, -10, -2, 32, 1, 
-15, 3, 7, -7, -6, -5, -40, -8, 35, 22, 2, -9, -16, -12, 0, 12, 
15, -9, -13, 5, 14, 10, -22, -15, 3, -4, -9, -7, 41, 34, -24, -43, 
25, -3, -27, 10, 5, 5, 2, -7, -10, -5, 2, -5, 24, 28, 4, -18, 
1, -12, -35, -21, -9, 8, 31, -4, 0, 27, 7, -24, -13, -2, -12, -8, 
-4, -8, 3, 26, 25, 2, -19, -19, 15, 16, -5, -30, -18, 15, -7, 0, 
-5, 5, 11, -4, 21, 1, 16, 12, -26, -12, 17, 11, -27, -17, 11, 8, 
-7, -17, 4, 18, 8, 12, -3, -8, -15, -27, 6, 20, -6, -9, -2, 0, 
24, 9, -2, -16, -1, -11, -16, -16, -13, 28, 31, -14, 2, 15, -5, -29, 
-8, 29, 16, -15, -1, 37, -3, -57, -40, 5, 14, 0, -1, 2, 19, 17, 
-7, -5, 4, 5, -17, -15, 34, -17, -38, -2, 17, 20, 4, 6, -4, -4, 
2, -28, -6, -1, -7, 17, 6, -3, 10, 16, 22, -6, -16, -14, -25, -18, 
15, 44, 19, -34, -13, 6, 5, 18, 1, 2, 12, -23, -12, 13, 9, -21, 
-12, 19, 7, -10, 14, 11, -13, -15, -6, 9, 19, -11, -31, -17, -1, 0, 
8, 8, 8, -3, 8, 6, -3, 4, -8, -7, -7, -7, -7, -7, 13, 16, 
0, -6, 11, 21, -6, -23, -10, -13, -16, 2, 33, 15, -6, 14, 12, 3, 
-25, -24, -4, -5, 3, 6, 24, 9, -8, -12, -11, -3, -17, -11, 28, 13, 
-5, 5, 11, 6, -15, -18, -1, 5, -1, 8, -1, -15, 3, 25, -23, -13, 
12, 2, -9, 0, -9, -29, -10, 34, 42, -18, -9, 12, 0, -6, 5, -10, 
-27, -7, 14, 9, 1, -7, -10, 3, 9, -8, 15, 7, -16, 0, -2, -12, 
-5, 11, 17, -21, -15, 25, 10, 1, -6, -7, -14, -6, -12, 3, 31, 15, 
-17, 7, 11, -14, 3, 7, -7, -4, -6, -9, -11, 7, 15, -2, -14, 11, 
15, -10, 3, 4, -16, -27, 10, 10, -4, 7, -8, -30, -7, 23, 9, 2, 
9, 12, -18, -37, -8, 12, -12, -5, 50, -1, -23, 7, 27, 2, -36, -6, 
2, -11, 6, 25, 15, -19, -24, -6, -5, 0, 14, 6, -21, -4, 27, 34, 
11, -43, -54, -7, 24, -16, -6, 16, 10, -8, 12, 25, 0, -9, -19, -11, 
15, -11, -20, -18, 1, -3, 14, 46, 30, -6, -8, -16, -42, -8, 6, -4, 
-1, 15, 28, -4, -17, 2, -2, -22, -15, 8, 6, 6, 3, -11, 2, 6, 
-7, -6, -13, 5, 16, 5, 4, 16, 14, -12, -33, -33, -5, 12, 3, -10, 
1, 14, -4, 30, 12, -20, -12, 13, -10, -39, -15, 10, -14, -20, 31, 40, 
10, -18, 5, 9, -2, 3, -15, -25, -20, -1, 22, 24, -3, -2, 9, -7, 
-21, -6, 13, 8, 7, 12, -1, -27, -37, -22, 13, 4, 13, 36, 26, -10, 
-30, 5, 11, -11, -11, 5, -9, -2, 12, 1, -7, 12, 9, 12, -5, -23, 
-1, 4, -7, -10, 1, -8, -18, 17, 18, 10, -5, -4, 2, -9, -2, 2, 
-19, -27, 1, 19, 23, 23, 8, -6, 12, -21, -40, -3, 27, -13, -19, 0, 
16, 14, 2, -6, -18, -5, 10, 2, -21, 5, 36, 21, 4, -8, -29, -28, 
-4, 8, 21, 28, 2, -10, -27, -2, 3, -14, -5, 16, 26, 16, 8, -38, 
-25, -10, -5, 21, 29, -7, 3, 10, -15, -19, 0, 12, 14, -3, 4, 5, 
-21, 2, 7, -3, -2, -3, -2, -5, -6, 18, 36, -16, -29, -29, -5, 22, 
2, -3, 8, 23, 9, -11, -15, -28, 10, 27, 26, 15, -3, 1, -13, -23, 
-12, -10, -6, -12, -7, 21, 36, 16, -24, -32, -7, 36, 23, 4, 8, 0, 
-33, -30, 5, -12, 12, 10, 6, 5, -9, 9, 14, 3, -9, -5, -27, -5, 
12, -15, -10, 13, 29, 0, -23, 9, 15, -6, 11, 0, -9, -3, -11, -11, 
-10, 6, 8, 8, 23, -14, -12, -13, -10, 6, 6, -13, -5, 15, 10, -2, 
17, 13, -14, -30, -11, 8, -11, -20, 9, 35, 15, 5, -3, -17, -12, -11, 
-20, 1, 22, 30, -2, -29, 1, -10, -15, 2, 10, 23, 8, -1, 0, -14, 
-12, -8, 4, -4, -22, 4, 20, 16, 3, -9, -10, -9, -12, 16, 2, -3, 
10, -20, -30, 19, 29, 8, -12, 7, 12, -9, -7, -11, -16, -25, 7, 16, 
3, 14, 16, -6, -5, 12, 16, -2, -30, -16, 18, -22, -18, 14, 9, 1, 
23, 17, -7, -10, -14, 7, 11, 2, -16, -18, 1, 17, -3, -20, -1, -2, 
-8, 11, 31, 8, -30, -12, 13, 5, -6, -9, 4, -1, -8, 1, 6, 15, 
0, -10, 8, 0, 0, 3, -7, -4, -4, 3, 6, -6, 0, 23, -16, -12, 
7, -12, 3, -16, 5, 24, 1, -12, -10, 19, 5, -12, -30, -24, 30, 24, 
24, 2, -10, -3, -6, -4, -13, -21, -11, 14, 4, -3, 15, 9, -6, 8, 
7, 1, -4, -16, 0, 7, -15, -8, 9, 17, -17, -9, 11, 2, 3, -10, 
5, 0, -21, 13, 19, 5, 14, -26, -30, -17, 10, 5, -5, 27, 21, 6, 
-27, -4, 8, -15, -9, 4, 7, -12, -13, 1, 14, 19, -8, 1, 1, -1, 
-5, 0, -24, -17, 15, 9, 11, 1, -1, -12, -14, -1, 0, 10, 13, 11, 
3, -9, -7, -2, -12, -22, -6, 9, 2, 18, 15, -2, 3, 8, -16, -4, 
9, 9, -14, -22, 3, 4, 21, 7, -12, 37, 8, -11, -26, -34, -17, 2, 
27, 9, 2, 12, 6, 5, -26, -24, -3, 6, 20, 7, -22, -21, 9, 10, 
1, 1, 3, -1, 4, 11, -14, -8, -9, -13, 2, 7, 17, 11, -14, -16, 
13, -5, -19, -8, -16, -8, 10, 14, 8, -5, 3, 6, 12, 13, -12, -30, 
-16, 6, -11, 0, 18, 9, 0, -16, -8, 15, 10, 5, 0, 4, -5, -5, 
-8, -30, 6, 17, 14, 1, 5, 15, -2, -7, -32, -17, 11, 3, 5, 1, 
5, 4, -8, -10, 6, 14, 0, -23, -21, 17, -1, 11, 24, 9, -10, -17, 
9, 1, -14, -15, 10, 37, 23, -5, -12, -21, -1, 2, -14, -10, 3, 19, 
8, 8, 9, -8, -22, -12, 13, 8, 0, -8, -15, 4, 2, -8, -3, 22, 
18, -9, -11, -1, 5, -15, -10, 20, 27, 16, 1, 2, 7, -20, -21, -20, 
-12, 8, -13, -10, 8, 8, 5, 31, 7, -14, 3, -4, -14, -21, -16, 12, 
13, 15, 9, -9, -10, 1, 8, -10, -13, -7, 11, 19, 9, -8, -13, 1, 
15, 9, -9, -13, 5, 3, 10, 6, -16, -1, 1, -3, -7, 1, 9, 15, 
1, -7, -9, -14, 4, -18, -24, -1, 15, 21, 8, 4, 9, 7, -9, -21, 
-20, -12, -16, -13, 32, 31, 11, 14, 1, -8, -17, -16, -16, -18, 3, 7, 
3, 29, 15, -15, -21, 3, -7, -22, -20, -9, 10, 16, 3, 8, 13, -7, 
-5, 10, 0, -16, -31, -13, 8, 15, 16, 15, -1, -16, 1, -1, -14, -19, 
-13, -7, -4, 19, 17, 15, 5, 4, 5, -17, -21, -20, -18, -5, 1, 16, 
34, 24, -5, -13, -10, -13, -8, -5, 0, -6, 7, 11, -9, -3, 23, 8, 
-5, -22, -15, 9, 1, -10, -14, 9, 19, 4, 9, 4, -11, -7, -4, -8, 
4, -6, 2, 1, -15, -5, 19, 4, -18, -23, -3, 17, 17, -2, -18, -13, 
7, 13, 6, -7, -18, 5, 0, 11, 12, -10, -11, -12, 6, -7, -6, 2, 
-4, 3, 4, 12, 9, -9, 0, 15, 3, -10, -15, -24, -21, 4, 3, 10, 
15, 8, 3, -2, 0, -2, -13, 7, -1, -5, -7, -12, -12, -15, 22, 13, 
10, 1, -13, 1, -2, -9, -8, -1, -1, 6, 9, 7, 5, -10, -19, 0, 
0, 1, -8, -10, 10, 6, 0, -7, -2, 10, -14, -1, 11, 10, -4, -13, 
13, 11, -3, -6, 7, -14, -9, 11, 9, 6, -2, 7, -12, -18, 1, -1, 
-12, -3, 3, 15, 14, 3, 2, -4, 2, -7, -13, -4, -5, 3, 7, 2, 
0, 5, 1, 0, 0, -5, -6, 1, 4, 1, -3, -9, -1, -3, -4, 9, 
9, 2, -9, -16, -4, 9, 18, 3, -8, 8, 1, -7, -7, -1, -5, -6, 
1, 7, 9, 4, -5, 2, -1, -9, -2, 5, 10, 5, -15, -14, 10, 1, 
-17, -18, 12, 35, 10, -14, -17, -10, -2, -1, 11, -5, -2, 18, 17, -1, 
-18, -18, -16, 4, 14, -6, -13, 5, 11, 11, 11, -3, 4, 3, -7, -3, 
1, -8, -18, -14, 12, 27, 12, -14, -4, 1, -5, -1, -8, -7, 4, 14, 
17, -3, -17, 13, 15, -11, -17, -4, 1, -5, 6, 16, 4, -4, -3, -6, 
-12, -3, 9, 0, -10, -17, -1, 15, 14, -3, -4, 5, -11, -10, 10, -6, 
-11, -2, 16, 12, -3, 5, -8, -15, -9, -9, 7, 1, 4, 12, 0, 7, 
12, -13, -26, -6, 13, 6, -10, -10, 3, 10, 7, -10, -11, 6, 13, -9, 
-16, -2, 6, 11, 2, 3, 12, 5, -4, -11, -6, -9, -1, 10, 3, -12, 
-12, 14, 9, 0, -9, -8, 4, 2, -11, -12, 0, 2, 4, 1, -6, 10, 
10, -8, 5, -4, -4, 6, 1, -2, -13, -7, 8, -1, -5, 9, 5, 1, 
-6, -8, 1, 4, -2, -5, -9, -11, -1, 22, 4, -18, -10, 9, -1, -15, 
-13, -2, 1, 2, 12, 7, 7, -1, -8, -9, -1, -1, -4, -4, 1, 5, 
5, 10, 2, -8, -13, -3, -7, -4, 12, 12, 6, 1, -3, -2, -4, -2, 
-10, -22, -4, 6, 15, 16, -2, 0, -8, -3, -2, -13, -8, 12, 13, -9, 
-8, 14, 15, 14, -4, -19, -19, 4, 1, -4, 8, 4, 0, 1, 1, -4, 
-17, -8, 5, 6, 5, -1, 8, 9, -6, -3, -17, -21, -6, 1, -2, 15, 
25, 21, 21, 2, -17, -29, -32, -21, -11, 5, 22, 20, 11, 11, 10, 9, 
-10, -32, -16, -18, -6, 7, 7, 21, 28, 27, -3, -14, -11, -18, -42, -43, 
16, 34, 16, 18, 32, -1, -11, -17, -23, -13, -3, -6, -1, 5, 12, 19, 
8, -6, 5, 9, -5, -27, -19, 2, 4, 9, 16, 4, 3, 1, 3, 7, 
-3, -13, -11, 0, 8, 16, 1, -8, 2, 6, -3, -19, -16, 3, 2, -4, 
17, 26, 6, -12, -8, 7, -2, -17, -17, 0, 15, 13, 7, 5, -8, 0, 
-9, -3, 1, 0, -3, -16, 5, 0, -3, 28, 12, -2, -14, -19, -13, -9, 
10, 10, -5, 0, 7, 4, 3, 4, -2, -12, -11, -6, 1, 5, 7, 11, 
6, 5, 8, -7, -21, -17, -1, 9, 8, 5, 3, 19, 9, -12, -17, -7, 
1, -10, -1, -7, -4, 4, 7, 11, 11, 8, 5, -2, -25, -20, -11, 2, 
-1, 7, 23, 14, 7, -11, -13, -9, -18, -11, 3, 16, 19, -14, -7, 5, 
5, 5, 0, -5, -5, -1, 5, 4, -20, -15, 5, -1, -3, 20, 7, -10, 
-10, -2, 7, 0, -12, -3, 6, 9, 1, 1, -6, -4, 11, 3, -19, -12, 
18, 18, 9, 13, -9, -17, -12, -3, 5, 5, -8, -7, -1, 2, 3, 2, 
-2, 8, 7, -4, -2, -8, -9, -14, -7, 12, 17, 7, 3, -3, -7, -8, 
-7, 5, 0, -1, 11, 4, 6, 4, -10, -23, -16, 7, -2, 1, 0, 12, 
17, 0, -10, -8, -4, -11, -1, 8, -2, 2, 4, -1, 4, -8, -8, 5, 
-3, -8, -4, 2, -1, -5, -2, -1, 15, 5, -2, 4, 0, -10, -10, 0, 
2, 9, 17, 13, -4, -9, -3, -7, -6, -8, -19, -7, 8, 10, 2, 2, 
-5, -3, 6, 8, 15, -15, -22, -10, 5, 10, 5, 11, 2, -4, -10, -16, 
-5, 1, 8, 8, 7, 8, 6, 8, -10, -21, -12, -7, -4, 4, 16, 16, 
16, -1, -16, -16, -23, -18, -1, -4, 1, 17, 19, 11, 15, 1, -16, -28, 
-16, 11, 4, -6, -5, 5, 12, 3, -5, -8, -8, -11, 5, 0, -22, -15, 
3, 14, 16, 14, 4, 1, 2, -6, -14, -13, -9, -1, -3, -14, 10, 23, 
12, 0, -8, -12, 2, -3, -12, -8, 11, 15, -1, -3, -7, 1, 9, 1, 
-9, -13, -3, -3, 1, 6, 11, 5, -16, -21, 8, 15, 1, -12, -13, 1, 
22, 3, -10, -1, -5, -23, 0, 7, 6, 9, 6, 4, -2, 11, 12, -8, 
-19, -21, -2, 8, -2, -2, 14, 18, 1, -8, -9, -13, -6, 8, 11, -3, 
-15, -19, 10, 14, 10, 9, 1, 5, 5, -9, -19, -21, -23, 3, 17, 12, 
9, 10, 17, -4, -16, -20, -15, -1, 1, 5, 14, 17, 12, 4, -14, -22, 
-12, 3, 4, -5, -7, 10, 19, 1, -6, 3, -6, -13, -11, 0, 8, 9, 
8, 5, -4, -8, -3, 4, 5, -5, -20, -24, -2, 10, 28, 30, 13, -1, 
-10, -3, -6, -21, -22, -8, -12, -7, 23, 37, 25, -1, -7, -9, -9, -11, 
-18, -15, -18, 0, 12, 10, 21, 18, 10, 1, -4, -3, -10, -27, -36, -20, 
-1, 12, 7, 6, 19, 12, 3, 1, 5, 15, 7, -9, -25, -15, -2, 2, 
0, -2, -1, 13, 26, 18, 3, 3, -8, -33, -25, -25, -3, 19, 9, 9, 
5, 9, 23, 19, -11, 1, -1, -18, -36, -38, -1, 12, 10, 7, 16, 19, 
25, 30, 12, -20, -32, -45, -40, -5, 21, 17, 7, 22, 29, 21, 17, 11, 
-26, -34, -32, -27, -19, -9, 23, 23, 20, 27, 23, 15, -11, -28, -27, -25, 
-23, 4, 5, -2, 1, 10, 22, 19, -2, -11, 5, 9, -6, -6, -28, -37, 
-14, 7, 20, 6, 14, 19, 5, -3, -4, 2, 6, -3, -20, -30, -25, 1, 
18, 15, 15, 4, 5, 14, 19, 9, -9, -20, -32, -35, -16, 14, 21, 13, 
12, 17, 19, 6, 2, -7, -31, -38, -30, -23, 6, 37, 36, 11, 6, 8, 
-1, -9, -14, -12, -7, -12, -20, -14, 13, 36, 29, -7, -20, -19, -9, 4, 
14, 14, 4, -11, -13, -13, -6, 4, 3, -1, -6, 0, 17, 24, 16, -5, 
-18, -34, -28, -1, 13, 10, 18, 10, 14, 5, -5, 7, 5, -6, -6, -18, 
-37, -27, 6, 10, 12, 10, 8, 10, 12, 18, 15, -9, -33, -40, -28, -3, 
23, 34, 24, 7, 3, -10, -2, 21, 14, -23, -32, -37, -29, -5, 21, 20, 
7, 12, 18, 11, 9, 9, -5, -29, -40, -33, -6, 11, 25, 28, 10, -2, 
8, 12, 6, 0, -5, -33, -37, -28, -5, 25, 37, 15, 8, 7, 13, 12, 
-5, -16, -31, -36, -25, -8, 14, 16, 16, 16, 13, 15, -3, -12, -10, -14, 
-23, -19, -3, 3, 11, 33, 30, -4, 2, 6, -9, -21, -7, -15, -16, -10, 
-2, 8, 19, 29, 16, 8, 0, -12, -17, -28, -22, -9, -8, 9, 18, 15, 
22, 19, 4, -22, -10, -11, -17, -10, -3, 5, 1, -3, 2, 11, 18, 14, 
0, -13, -18, -17, -12, -8, -2, 4, 12, 11, 7, 13, 13, 3, -12, -17, 
-7, -10, -13, 1, 10, 1, 5, 3, -8, 0, 18, 2, -12, -21, -17, -4, 
-2, 14, 13, -4, -8, -3, 13, 16, 9, 1, -14, -19, -5, -4, 4, 9, 
-2, -11, 2, 7, 10, 15, 10, -14, -23, -20, -12, -2, 13, 10, 3, 2, 
1, 3, 3, 4, -4, -10, -14, -11, 3, 9, 9, 8, 2, -10, -5, -2, 
1, 10, 10, -8, -15, -11, -6, 2, 11, 4, -3, -5, 1, 8, 8, 1, 
-9, -16, -10, -6, 1, 9, 11, 4, -11, -15, -1, 16, 19, 14, 5, -17, 
-14, -10, -12, 8, 20, 14, 4, -8, -4, -1, -5, -11, -11, -11, -4, 2, 
5, 15, 19, 12, -5, -17, -13, 0, 1, -1, 1, -4, -7, 2, 12, 20, 
23, 10, -19, -26, -22, -13, -3, 5, 3, 2, 6, 13, 18, 17, 2, -18, 
-26, -26, -17, 1, 11, 11, 6, 4, 6, 14, 12, 0, -7, -17, -20, -8, 
-3, 3, 12, 17, 11, 0, -8, -6, 1, -7, -5, -4, -9, -5, -1, 5, 
9, 11, 10, -1, -13, -4, -3, 0, 6, -1, -2, 3, 1, 1, 4, 5, 
-13, -17, -10, -2, 10, 12, 1, -2, -3, 0, 5, 10, 1, -7, -7, -11, 
-14, 2, 12, 10, 0, -2, -3, -6, -3, 2, 2, -3, -10, -7, 5, 16, 
15, 11, -4, -15, -14, -3, 7, -4, -7, -4, -10, -8, 3, 13, 6, 3, 
7, 4, -1, -1, -6, -7, -8, -15, -10, 0, 8, 18, 21, 7, -7, -5, 
-7, -4, -2, -4, -3, -7, -9, -1, 8, 17, 10, 0, -6, -9, -6, -5, 
-2, -2, -3, -3, -7, 3, 14, 17, 7, -7, -10, -5, 1, 4, 0, -5, 
-8, -5, -3, 3, 11, 11, 6, 0, -6, -8, -4, -5, -16, -13, -3, -1, 
1, 22, 21, 12, -1, -18, -18, -9, -6, -1, -1, 3, 11, 10, 6, 3, 
-3, -7, -9, -13, -11, -2, 3, 4, 9, 8, 9, 5, -3, -4, -4, -1, 
-2, -4, -3, -2, -6, -6, 2, 3, 4, 1, -2, 6, 8, -3, -10, -8, 
-9, -2, 5, 5, 6, 4, -2, -2, 3, 5, -1, -10, -10, -7, -3, 3, 
4, 3, 3, 4, 2, 2, 4, -2, -7, -12, -9, -2, -3, -2, 5, 13, 
12, 7, 3, -7, -12, -10, -10, -4, -3, 2, 7, 1, 6, 8, 9, 2, 
-5, -4, -2, -1, -3, -3, -5, -3, 2, 3, 5, 10, 6, -3, -7, -6, 
-5, -1, -5, -10, -6, -6, 0, 9, 12, 5, -1, -3, -7, 2, 7, 2, 
-8, -11, -10, -4, 3, 7, 12, 10, 4, -2, -9, -8, -5, -4, -4, -2, 
5, 4, 4, 6, 7, 1, -13, -17, -11, -6, 0, 2, 4, 6, 6, 7, 
5, 5, 5, -3, -12, -11, -5, 1, 9, 6, -3, -4, -2, -1, 1, 5, 
0, -8, -12, -4, 7, 6, 6, 4, 3, 1, -3, -6, -1, 0, -2, -4, 
-4, -2, 0, 1, 2, 2, -1, 1, -1, -5, -1, 1, -5, -4, 0, 4, 
2, -2, 3, 4, 1, -1, 2, 2, -4, -6, -7, -6, -3, 0, 1, 3, 
5, 7, 5, -6, -8, -9, -5, -1, 3, 11, 7, 3, -2, -5, -1, -1, 
-3, -3, -2, -3, 2, -2, -7, -4, 0, 2, 5, 7, 7, 3, -6, -6, 
-6, -4, 1, 1, 1, 1, 3, 0, -4, -5, -4, 2, 4, 4, 3, 0, 
-4, -3, -3, -3, -1, 2, -1, -3, 0, 2, 1, 3, -1, -6, -5, -1, 
1, 4, 8, 2, -4, -6, -2, 2, 2, -1, -8, -7, -4, 0, 4, 8, 
4, -4, -2, 2, 3, 2, 1, -4, -6, -8, -7, 0, 2, 5, 9, 7, 
1, -2, 0, -3, -4, -8, -7, -6, -3, 1, 3, 7, 5, 0, -1, -1, 
-2, -1, -2, -4, -1, -1, 1, 2, 2, 1, -1, -2, -2, -1, -1, -1, 
-1, -1, -1, 0, 1, 1, 0, -1, -1, -1, -1, 1, 0, 0, -1, -2, 
-1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, };
