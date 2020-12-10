
class Capacitor {
 public:
	Capacitor(): capacity_(1), voltage_(1) {};
	Capacitor(double c, double v): capacity_(c), voltage_(v) {};

	void SetCapacity(double c) {
		capacity_ = c;
	};

	void SetVoltage(double v) {
		voltage_ = v;
	};

	double GetCapacity() {
		return capacity_;
	};

	double GetVoltage() {
		return voltage_;
	};

	double GetCharge() {
		return capacity_ * voltage_;
	};


 protected:
	double capacity_;
	double voltage_;
};
