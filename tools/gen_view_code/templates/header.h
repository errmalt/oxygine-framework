/**
This file was generated by build tool. Don't change it!
*/
#pragma once

#include "Sprite.h"
#include "ActorsFactory.h"
using namespace oxygine;

{% for ct in types %}
{% if ct.ns %}
DECLARENS_SMART({{ct.ns}}, {{ct.className}}, {{ct.spClassName}});
{% else %}
DECLARE_SMART({{ct.className}}, {{ct.spClassName}});
{% endif %}
{% endfor %}
//

