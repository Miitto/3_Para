#include "script_component.hpp"

params ["_obj"];

_bb = 0 boundingBoxReal _obj;

_bbx = [_bb select 0 select 0, _bb select 1 select 0];
_bby = [_bb select 0 select 1, _bb select 1 select 1];
_bbz = [_bb select 0 select 2, _bb select 1 select 2];
_arr = [];
0 = {
	_y = _x;
	0 = {
		_z = _x;
		0 = {
			0 = _arr pushBack (_obj modelToWorld [_x,_y,_z]);
		} count _bbx;
	} count _bbz;
	reverse _bbz;
} count _bby;
_arr pushBack (_arr select 0);
_arr pushBack (_arr select 1);
_arr
