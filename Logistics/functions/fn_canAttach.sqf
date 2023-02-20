params["_veh", "_obj"];

_objBB = 0 boundingBoxReal _obj;
_objMin = _obj modelToWorld (_objBB select 0);
_objMax = _obj modelToWorld (_objBB select 1);

if (Para_acceptableCorners == 0) exitWith {
	true
};

_cornerCnt = 0;

_corners = Para_connectObj call Para_fnc_getBoundingCorners;

_inHelper = {
	params ["_pt0", "_pt1"];
	(_pt0 select 0 <= _pt1 select 0) && (_pt0 select 1 <= _pt1 select 1) && (_pt0 select 2 <= _pt1 select 2)
};

{
	_uPos = _veh worldToModel _x;
	_oBox = 0 boundingBoxReal _veh;

	if (([_oBox select 0, _uPos] call _inHelper) && ([_uPos, _oBox select 1] call _inHelper)) then {
		_cornerCnt = _cornerCnt + 1;
	};
} forEach _corners;

if (_cornerCnt >= Para_acceptableCorners) exitWith {
	true
};

false