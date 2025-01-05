int rental_car_cost(int d) {

    return d * 40 + (d < 3 ? 0 : d < 7 ? -20 : -50) ;
}