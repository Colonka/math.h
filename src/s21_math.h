#ifndef S21_MATH_H_
#define S21_MATH_H_

#define s21_PI 3.141592653589793238
#define s21_TWO_PI 6.283185307
#define s21_E 2.71828182845905
#define s21_EPS 1e-12
#define s21_LDBL_MAX 1E+37
#define s21_INF 1.0 / 0.0
#define s21_NAN 0.0 / 0.0

/**
 * @brief Function that computes absolute value of an integer value
 * @param x value
 * @return absolute value
 */
int s21_abs(int x);

/**
 * @brief Function that computes arc cosine
 * @param x value
 * @return result of computing
 */
long double s21_acos(double x);

/**
 * @brief Function that computes arc sine
 * @param x value
 * @return result of computing
 */
long double s21_asin(double x);

/**
 * @brief Function that computes arc tangent
 * @param x value
 * @return result of computing
 */
long double s21_atan(double x);

/**
 * @brief Function that returns the nearest integer not less than the given
 * value
 * @param x value
 * @return result of computing
 */
long double s21_ceil(double x);

/**
 * @brief Function that computes cosine
 * @param x value
 * @return result of computing
 */
long double s21_cos(double x);

/**
 * @brief Function that returns e raised to the given power
 * @param x value
 * @return result of computing
 */
long double s21_exp(double x);

/**
 * @brief Function that computes absolute value of a floating-point value
 * @param x value
 * @return result of computing
 */
long double s21_fabs(double x);

/**
 * @brief Function that returns the nearest integer not greater than the given
 * value
 * @param x value
 * @return result of computing
 */
long double s21_floor(double x);

/**
 * @brief Function that computes natural logarithm
 * value
 * @param x value
 * @return result of computing
 */
long double s21_log(double x);

/**
 * @brief Function that computes tangent
 * @param x value
 * @return result of computing
 */
long double s21_tan(double x);

/**
 * @brief Function that computes sine
 * @param x value
 * @return result of computing
 */
long double s21_sin(double x);

/**
 * @brief Function that computes square root
 * @param x value
 * @return result of computing
 */
long double s21_sqrt(double x);

/**
 * @brief Function that computes remainder of the floating-point division
 * operation
 * @param x value
 * @return result of computing
 */
long double s21_fmod(double x, double y);

/**
 * @brief Function that raises a number to the given power
 * @param x value
 * @return result of computing
 */
long double s21_pow(double base, double exp);

#endif
