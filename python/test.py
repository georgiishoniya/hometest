import unittest
import prime


class TestIsPrime(unittest.TestCase):
    def test_is_prime(self):
        self.assertEqual(prime.isprime(2), True)

    def test_is_not_prime(self):
        self.assertEqual(prime.isprime(6), False)


if __name__ == '__main__':
    unittest.main()