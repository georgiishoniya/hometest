import org.junit.jupiter.api.DisplayName;
import org.junit.jupiter.api.Test;

import static org.junit.jupiter.api.Assertions.*;

class PrimeCheckerTest {

    @Test
    @DisplayName("Is prime")
    void isPrime() {
        assertTrue(PrimeChecker.isPrime(2));
    }

    @Test
    @DisplayName("Is not prime")
    void isNotPrime() {
        assertFalse(PrimeChecker.isPrime(6));
    }
}