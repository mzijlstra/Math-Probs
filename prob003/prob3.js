function isPrime(test) {
	var stop = Math.sqrt(test);
	for (var i = 2; i <= stop; i++) {
		if (test % i === 0) {
			return false;
		}
	}
	return true;
}

//var factors = [];
var test = 600851475143;
for (var i = 2; i < test; i++) {
	if (isPrime(i) && test % i === 0) {
//		factors.push(i);
		test = test / i;
		if (isPrime(test)) {
			console.log(test);
//			console.log(factors);
			break;
		}
	}
}

