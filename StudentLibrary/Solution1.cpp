#include "Solution1.h"
#include  <cmath>
// Don't fortget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_1

float Solution1::ConvertTemperature(float _value, TemperatureUnits _from, TemperatureUnits _to)
{
	
	if (_from == _to) {
		return _value;
	}
	else
	{
		float resultat;
		switch (_from)
		{
		case TemperatureUnits::CELSIUS:
			if (_to == TemperatureUnits::FAHRENHEIT)
			{
				resultat = ((9 / 5) * _value) + 32;
				return std::roundf(resultat * 100) / 100;
			}
			else if (_to == TemperatureUnits::KELVIN)
			{
				resultat = _value + 273.15f;
				resultat = std::roundf(resultat * 100) / 100;
				return resultat;
			}
		case TemperatureUnits::FAHRENHEIT:
			if (_to == TemperatureUnits::CELSIUS)
			{
				resultat = (5 / 9) * (_value - 32);
				return std::roundf(resultat * 100) / 100;
			}
			else if (_to == TemperatureUnits::KELVIN)
			{
				resultat = ((5 / 9) * (_value - 32)) + 273.15f;
				return std::roundf(resultat * 100) / 100;
			}
		case TemperatureUnits::KELVIN:
			if (_to == TemperatureUnits::FAHRENHEIT)
			{
				resultat = ((9 / 5) * (_value - 273.15f)) + 32;
				return std::roundf(resultat * 100) / 100;
			}
			else if (_to == TemperatureUnits::CELSIUS)
			{
				resultat = _value - 273.15f;
				return std::roundf(resultat * 100) / 100;
			}
		default:
			break;
		}
	}
}

#endif
