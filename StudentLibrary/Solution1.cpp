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
		switch (_from)
		{
		case TemperatureUnits::CELSIUS:
			if (_to == TemperatureUnits::FAHRENHEIT)
			{
				_value = (9 / 5 * _value) + 32;
				return std::round(_value * 100) / 100;
			}
			else if (_to == TemperatureUnits::KELVIN)
			{
				_value += 273.15;
				return std::round(_value * 100) / 100;
			}
		case TemperatureUnits::FAHRENHEIT:
			if (_to == TemperatureUnits::CELSIUS)
			{
				_value = 5 / 9 * (_value - 32);
				return std::round(_value * 100) / 100;
			}
			else if (_to == TemperatureUnits::KELVIN)
			{
				_value = (5 / 9 * (_value - 32)) + 273.15;
				return std::round(_value * 100) / 100;
			}
		case TemperatureUnits::KELVIN:
			if (_to == TemperatureUnits::FAHRENHEIT)
			{
				_value = (9 / 5 (_value - 273.15)) + 32;
				return std::round(_value * 100) / 100;
			}
			else if (_to == TemperatureUnits::CELSIUS)
			{
				_value -= 273;
				return std::round(_value * 100) / 100;
			}
		default:
			break;
		}
	}
}

#endif
