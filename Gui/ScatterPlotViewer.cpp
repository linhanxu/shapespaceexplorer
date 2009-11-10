#include <GLBlaat/GL.h>

#include "ScatterPlotViewer.h"
#include "ScatterPlotViewer.moc"

#include "Rendering/ScatterPlotRenderer.h"

#include "ScatterPlotInteractor.h"

namespace Diverse
{
	// ------------------------------------------------------------------------
	ScatterPlotViewer::ScatterPlotViewer(QWidget *parent) : NQVTKWidget(parent)
	{
		ScatterPlotRenderer *renderer = new ScatterPlotRenderer();
		SetRenderer(renderer);

		SetInteractor(new ScatterPlotInteractor(renderer));
	}

	// ------------------------------------------------------------------------
	ScatterPlotViewer::~ScatterPlotViewer()
	{
	}
}