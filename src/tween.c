#include "tween.h"
#include <math.h>

float tw_ease(float start, float end, float percent)
{
	return (1.0f - percent) * start + percent * end;
}

float tw_ease_in(float start, float end, float percent)
{
	const float p = 1.0f - percent;
	return tw_ease(end, start, p * p);
}

float tw_ease_out(float start, float end, float percent)
{
	return tw_ease(start, end, percent * percent);
}

float tw_ease_in_out(float start, float end, float percent)
{
	const float mid = (start + end) * 0.5f;
	if (percent < 0.5f) {
		return tw_ease_in(start, mid, percent * 2.0f);
	} else {
		return tw_ease_out(mid, end, (percent - 0.5f) * 2.0f);
	}
}

float tw_ease_out_in(float start, float end, float percent)
{
	const float mid = (start + end) * 0.5f;
	if (percent < 0.5f) {
		return tw_ease_out(start, mid, percent * 2.0f);
	} else {
		return tw_ease_in(mid, end, (percent - 0.5f) * 2.0f);
	}
}
