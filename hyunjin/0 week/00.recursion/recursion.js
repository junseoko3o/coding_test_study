'use strict';

function factorial(n) {
  if (n === 0 || n === 1) return n;
  console.log('factorial', n);

  return n * factorial(n - 1);
}

function fibonacci(n) {
  if (n === 0 || n === 1) return n;
  console.log('fibonacci', n);

  return fibonacci(n - 1) + fibonacci(n - 2);
}

function main() {
  const num = 5;

  const facto = factorial(num);
  console.log('factorial result', facto);
  console.log('=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=');
  fibonacci(num);
}

main();