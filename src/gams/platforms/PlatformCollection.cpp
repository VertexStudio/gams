/**
 * Copyright (c) 2015 Carnegie Mellon University. All Rights Reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 * 
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following acknowledgments and disclaimers.
 * 
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 * 
 * 3. The names "Carnegie Mellon University," "SEI" and/or "Software
 *    Engineering Institute" shall not be used to endorse or promote products
 *    derived from this software without prior written permission. For written
 *    permission, please contact permission@sei.cmu.edu.
 * 
 * 4. Products derived from this software may not be called "SEI" nor may "SEI"
 *    appear in their names without prior written permission of
 *    permission@sei.cmu.edu.
 * 
 * 5. Redistributions of any form whatsoever must retain the following
 *    acknowledgment:
 * 
 *      This material is based upon work funded and supported by the Department
 *      of Defense under Contract No. FA8721-05-C-0003 with Carnegie Mellon
 *      University for the operation of the Software Engineering Institute, a
 *      federally funded research and development center. Any opinions,
 *      findings and conclusions or recommendations expressed in this material
 *      are those of the author(s) and do not necessarily reflect the views of
 *      the United States Department of Defense.
 * 
 *      NO WARRANTY. THIS CARNEGIE MELLON UNIVERSITY AND SOFTWARE ENGINEERING
 *      INSTITUTE MATERIAL IS FURNISHED ON AN "AS-IS" BASIS. CARNEGIE MELLON
 *      UNIVERSITY MAKES NO WARRANTIES OF ANY KIND, EITHER EXPRESSED OR
 *      IMPLIED, AS TO ANY MATTER INCLUDING, BUT NOT LIMITED TO, WARRANTY OF
 *      FITNESS FOR PURPOSE OR MERCHANTABILITY, EXCLUSIVITY, OR RESULTS
 *      OBTAINED FROM USE OF THE MATERIAL. CARNEGIE MELLON UNIVERSITY DOES
 *      NOT MAKE ANY WARRANTY OF ANY KIND WITH RESPECT TO FREEDOM FROM PATENT,
 *      TRADEMARK, OR COPYRIGHT INFRINGEMENT.
 * 
 *      This material has been approved for public release and unlimited
 *      distribution.
 **/
#include "PlatformCollection.h"
#include "gams/loggers/GlobalLogger.h"

gams::platforms::BasePlatform *
gams::platforms::PlatformCollectionFactory::create (
  const madara::knowledge::KnowledgeMap & /*args*/,
  madara::knowledge::KnowledgeBase * knowledge,
  variables::Sensors * sensors,
  variables::Platforms * platforms,
  variables::Self * self)
{
  BasePlatform * result (0);
  
  if (knowledge && sensors && platforms && self)
  {
    result = new PlatformCollection (knowledge, sensors, platforms, self);
  }

  return result;
}

gams::platforms::PlatformCollection::PlatformCollection (
  madara::knowledge::KnowledgeBase * knowledge,
  variables::Sensors * sensors,
  variables::Platforms * platforms,
  variables::Self * self)
  : BasePlatform (knowledge, sensors, self)
{
  if (platforms && knowledge)
  {
    (*platforms)[get_id ()].init_vars (*knowledge, get_id ());
    status_ = (*platforms)[get_id ()];
  }
}

gams::platforms::PlatformCollection::~PlatformCollection ()
{
}

void
gams::platforms::PlatformCollection::operator= (const PlatformCollection & rhs)
{
  if (this != &rhs)
  {
    platforms::BasePlatform * dest = dynamic_cast <platforms::BasePlatform *> (this);
    const platforms::BasePlatform * source =
      dynamic_cast <const platforms::BasePlatform *> (&rhs);

    *dest = *source;
  }
}
 
int
gams::platforms::PlatformCollection::analyze (void)
{ 
  return 0;
}

std::string
gams::platforms::PlatformCollection::get_id () const
{
  return "collection";
}

std::string
gams::platforms::PlatformCollection::get_name () const
{
  return "Collection";
}

double
gams::platforms::PlatformCollection::get_accuracy () const
{
  return 0.0;
}

double
gams::platforms::PlatformCollection::get_move_speed () const
{
  return 0.0;
}

int
gams::platforms::PlatformCollection::home (void)
{
  return 0;
}

int
gams::platforms::PlatformCollection::land (void)
{
  return 0;
}

int
gams::platforms::PlatformCollection::move (const pose::Position & /*position*/,
  const PositionBounds & /*bounds*/)
{
  return 0;
}

int
gams::platforms::PlatformCollection::sense (void)
{
  return 0;
}

void
gams::platforms::PlatformCollection::set_move_speed (const double& /*speed*/)
{
}

int
gams::platforms::PlatformCollection::takeoff (void)
{
  return 0;
}
