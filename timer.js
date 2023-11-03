const targetDate = new Date('2023-11-12 00:00:00').getTime();

const countdown = setInterval(function() {
  const currentDate = new Date().getTime();
  const remainingTime = targetDate - currentDate;

  const days = Math.floor(remainingTime / (1000 * 60 * 60 * 24));
  const hours = Math.floor((remainingTime % (1000 * 60 * 60 * 24)) / (1000 * 60 * 60));
  const minutes = Math.floor((remainingTime % (1000 * 60 * 60)) / (1000 * 60));
  const seconds = Math.floor((remainingTime % (1000 * 60)) / 1000);

  console.log(${days},d ${hours},h ${minutes},m ${seconds},s);

  if (remainingTime <= 0) {
    console.log('Wishing your and your family a beautiful Diwali');
    clearInterval(countdown);
  }
}, 1000);