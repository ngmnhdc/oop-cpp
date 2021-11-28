#include "KyHieu.h"

KyHieu::KyHieu(){
	truongDo = 0;
	type = 0;
}

KyHieu::~KyHieu(){}

void KyHieu::setType(int _type) {
	type = _type;
}

int KyHieu::getType() {
	return type;
}

int KyHieu::getTruongDo() {
	return truongDo;
}