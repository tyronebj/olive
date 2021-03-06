/***

  Olive - Non-Linear Video Editor
  Copyright (C) 2019 Olive Team

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.

***/

#ifndef TRIGNODE_H
#define TRIGNODE_H

#include "node/node.h"

OLIVE_NAMESPACE_ENTER

class TrigonometryNode : public Node
{
public:
  TrigonometryNode();

  virtual Node* copy() const override;

  virtual QString Name() const override;
  virtual QString id() const override;
  virtual QString Category() const override;
  virtual QString Description() const override;

  virtual void Retranslate() override;

  virtual NodeValueTable Value(NodeValueDatabase &value) const override;

private:
  enum Operation {
    kOpSine,
    kOpCosine,
    kOpTangent,
    kOpArcSine,
    kOpArcCosine,
    kOpArcTangent,
    kOpHypSine,
    kOpHypCosine,
    kOpHypTangent
  };

  NodeInput* method_in_;

  NodeInput* x_in_;

};

OLIVE_NAMESPACE_EXIT

#endif // TRIGNODE_H
