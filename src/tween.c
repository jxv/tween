#include "tween.h"
#include <math.h>

float tw_lerp(float start, float end, float percent)
{
	return (1.0f - percent) * start + percent * end;
}

float tw_ease_in(float start, float end, float percent)
{
	return tw_lerp(start, end, sqrtf(percent));
}

float tw_ease_out(float start, float end, float percent)
{
	return tw_lerp(start, end, percent * percent);
}
