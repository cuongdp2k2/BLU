#include <cstdint>
#include <iostream>

// Calculates (a * b) % mod
uint64_t mul_mod(uint64_t a, uint64_t b,
					uint64_t mod)
{
	uint64_t res = 0;
	while (b > 0) {
		if (b & 1) {
			res = (res + a) % mod;
		}
		a = (a * 2) % mod;
		b >>= 1;
	}
	return res;
}

// Calculates (a^b) % mod
uint64_t pow_mod(uint64_t a, uint64_t b,
					uint64_t mod)
{
	uint64_t res = 1;
	a %= mod;
	while (b > 0) {
		if (b & 1) {
			res = mul_mod(res, a, mod);
		}
		a = mul_mod(a, a, mod);
		b >>= 1;
	}
	return res;
}

// Calculates Barrett reduction
// of x modulo mod
uint64_t barrett_reduce(uint64_t x,
							uint64_t mod,
							uint64_t mu)
{
	uint64_t q1 = x >> 32;
	uint64_t q2 = ((mu * q1) >> 32) * mod;
	uint64_t r1 = x & 0xffffffff;
	uint64_t r2 = mu * r1;
	uint64_t q3 = r2 >> 32;
	uint64_t r3 = r1 - q3 * mod;
	uint64_t res = r3 + ((r3 >> 63) & mod);
	if (res >= mod) {
		res -= mod;
	}
	return res;
}

// Driver code
int main(int argc, char* argv[]) 
{
	uint64_t x = 123456789;
	uint64_t mod = 1000000007;
	uint64_t mu = ((1ULL << 63) + mod - 1) / mod;

	printf("x = %lx\n",x);
	printf("mod = %lx\n",mod);
	printf("mu = %lx\n",mu);

	// Function call
	// Calculate x^2 % mod
	uint64_t x_squared = mul_mod(x, x, mod);
	printf("x_squard= %lx\n",x_squared);

	uint64_t x_squared_barrett = barrett_reduce(x_squared, mod, mu);
	printf("x^2 modulus mod = 0x%lx\n", x_squared_barrett);

	// Calculate x^1234 % mod
	uint64_t x_pow_1234 = pow_mod(x, 1234, mod);
	printf("x_pow_123 = %lx\n",x_pow_1234);
	
	uint64_t x_pow_1234_barrett = barrett_reduce(x_pow_1234, mod, mu);
	printf("x^1234 modulus mod = 0x%lx\n",x_pow_1234_barrett);

	return 0 ;
}
