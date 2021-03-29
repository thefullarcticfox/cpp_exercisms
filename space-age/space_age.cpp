#include "space_age.h"

namespace space_age {
	space_age::space_age(long sec) : sec(sec) {}

	long	space_age::seconds() const {
		return (sec);
	}

	// since we go approximate we can use float instead of double
	float	space_age::on_earth() const {
		return (static_cast<float>(sec) * 3.16880878e-8f);
	}

	// Mercury: orbital period 0.2408467 Earth years
	float	space_age::on_mercury() const {
		return (on_earth() * 4.15201869f);
	}

	// Venus: orbital period 0.61519726 Earth years
	float	space_age::on_venus() const {
		return (on_earth() * 1.62549488f);
	}

	// Mars: orbital period 1.8808158 Earth years
	float	space_age::on_mars() const {
		return (on_earth() * 0.53168417f);
	}

	// Jupiter: orbital period 11.862615 Earth years
	float	space_age::on_jupiter() const {
		return (on_earth() * 0.08429844f);
	}

	// Saturn: orbital period 29.447498 Earth years
	float	space_age::on_saturn() const {
		return (on_earth() * 0.03395874f);
	}

	// Uranus: orbital period 84.016846 Earth years
	float	space_age::on_uranus() const {
		return (on_earth() * 0.01190237f);
	}

	// Neptune: orbital period 164.79132 Earth years
	float	space_age::on_neptune() const {
		return (on_earth() * 0.00606828f);
	}
}  // namespace space_age
