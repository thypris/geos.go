package geos

import "fmt"

type Coordinate [2]float64

func NewCoordinate(x, y float64) Coordinate {
	return [2]float64{x, y}
}

func (c *Coordinate) X() float64 {
	return c[0]
}

func (c *Coordinate) Y() float64 {
	return c[1]
}

func (c *Coordinate) String() string {
	return fmt.Sprintf("%f,%f", c[0], c[1])
}
