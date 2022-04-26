#ifndef TCALC_H
#define TCALC_H

template <typename T>
class TCalc
{
private:
    T _res;
public:
    TCalc();
    T add(T x, T y);
    T res() const;
};

template class TCalc<int>;
template class TCalc<double>;

template <typename T>
TCalc<T>::TCalc()
{}

template <typename T>
T TCalc<T>::add(T x, T y)
{
    _res = x + y;
    return (_res);
}

template <typename T>
T TCalc<T>::res() const
{
    return _res;
}
#endif // TCALC_H
