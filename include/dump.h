/*
 * MicroHH
 * Copyright (c) 2011-2014 Chiel van Heerwaarden
 * Copyright (c) 2011-2014 Thijs Heus
 * Copyright (c)      2014 Bart van Stratum
 *
 * This file is part of MicroHH
 *
 * MicroHH is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * MicroHH is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with MicroHH.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef DUMP
#define DUMP

class Master;
class Model;
class Grid;
class Fields;

class Dump
{
  public:
    Dump(Model *, Input *);
    ~Dump();

    void init(double);

    unsigned long getTimeLimit(unsigned long);

    std::string swdump;
    bool doDump();
    void saveDump(double *, double *, std::string);

  private:
    Master *master;
    Model  *model;
    Grid   *grid;
    Fields *fields;

    double sampletime;
    unsigned long isampletime;
};
#endif

